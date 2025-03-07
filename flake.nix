{
  description = "Tree-sitter SPSS Flake";

  nixConfig = {
    extra-trusted-substituters = [
      "https://cache.nixos.org"
    ];
    extra-trusted-public-keys = [
      "cache.nixos.org-1:6NCHdD59X431o0gWypbMrAURkbJ16ZPMQFGspcDShjY="
    ];
  };

  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs =
    {
      self,
      nixpkgs,
      flake-utils,
      ...
    }@args:
    flake-utils.lib.eachDefaultSystem (
      system:
      let
        language = "spss";
        version = "0.10";
        src = builtins.toString ./.;
        location = null;
        generate = true;
        pkgs = nixpkgs.legacyPackages.${system};
        lib = nixpkgs.lib;
      in
      {
        packages = {
          default = pkgs.stdenv.mkDerivation (
            {
              pname = "${language}-grammar";

              inherit src version;

              nativeBuildInputs = lib.optionals generate [
                pkgs.nodejs
                pkgs.tree-sitter
              ];

              CFLAGS = [
                "-Isrc"
                "-O2"
              ];
              CXXFLAGS = [
                "-Isrc"
                "-O2"
              ];

              stripDebugList = [ "parser" ];

              configurePhase =
                lib.optionalString (location != null) ''
                  cd ${location}
                ''
                + lib.optionalString generate ''
                  tree-sitter generate
                '';

              # When both scanner.{c,cc} exist, we should not link both since they may be the same but in
              # different languages. Just randomly prefer C++ if that happens.
              buildPhase = ''
                runHook preBuild
                if [[ -e src/scanner.cc ]]; then
                  $CXX -fPIC -c src/scanner.cc -o scanner.o $CXXFLAGS
                elif [[ -e src/scanner.c ]]; then
                  $CC -fPIC -c src/scanner.c -o scanner.o $CFLAGS
                fi
                $CC -fPIC -c src/parser.c -o parser.o $CFLAGS
                rm -rf parser
                $CXX -shared -o parser *.o
                runHook postBuild
              '';

              installPhase = ''
                runHook preInstall
                mkdir $out
                mv parser $out/
                if [[ -d queries ]]; then
                  cp -r queries $out
                fi
                runHook postInstall
              '';
            }
            // removeAttrs args [
              "language"
              "location"
              "generate"
            ]
          );
        };
      }
    );
}
