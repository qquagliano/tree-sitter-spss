; SECTION: Basic commands

(command) @indent.begin
; This catches the /.\n/ and accounts for single line commands:
(end_of_command) @indent.end

; SECTION: Special command types with their own blocks

(expression) @indent.begin
(expression_source) @indent.ignore @indent.branch

(transformation) @indent.begin
(expression_source) @indent.ignore @indent.branch
