// swift-tools-version:5.3
import PackageDescription

let package = Package(
    name: "TreeSitterSpss",
    products: [
        .library(name: "TreeSitterSpss", targets: ["TreeSitterSpss"]),
    ],
    dependencies: [
        .package(url: "https://github.com/ChimeHQ/SwiftTreeSitter", from: "0.8.0"),
    ],
    targets: [
        .target(
            name: "TreeSitterSpss",
            dependencies: [],
            path: ".",
            sources: [
                "src/parser.c",
                // NOTE: if your language has an external scanner, add it here.
            ],
            resources: [
                .copy("queries")
            ],
            publicHeadersPath: "bindings/swift",
            cSettings: [.headerSearchPath("src")]
        ),
        .testTarget(
            name: "TreeSitterSpssTests",
            dependencies: [
                "SwiftTreeSitter",
                "TreeSitterSpss",
            ],
            path: "bindings/swift/TreeSitterSpssTests"
        )
    ],
    cLanguageStandard: .c11
)
