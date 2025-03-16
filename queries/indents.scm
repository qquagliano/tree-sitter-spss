; SECTION: Basic commands

(command) @indent.begin
; This catches the /.\n/ and accounts for single line commands:
(end_of_command) @indent.end

; TODO: Special command types with their own required subcommands

(expression) @indent.begin
(transformation) @indent.begin
