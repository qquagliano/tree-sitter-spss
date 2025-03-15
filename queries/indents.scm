; SECTION: Basic commands

(command) @indent.begin
; This catches the /.\n/ and accounts for single line commands:
(end_of_command) @indent.end

; SECTION: Special command types with their own blocks

(expression) @indent.begin
(expression_out_start) @indent.end

(transformation) @indent.begin
(transformation_out_start) @indent.end

