; SECTION: Basic command and subcommands
(command name: (identifier) @function)
(subcommand name: (subidentifier) @keyword)

; SECTION: Misc nodes

(arguments) @markup.raw
(string) @string
(number) @number

; SECTION: Comments

(comment) @comment

; SECTION: Special command types with their own blocks

(data) @function ; for normal command highlighting
(data_source) @variable ; for bolded white highlighting

(expression) @function
(expression_out_subidentifier) @keyword ; for normal subcommand highlighting

(gpl) @function
(gpl_source) @variable

(injection) @function
(language) @variable
(injection_source) @none ; This is "transparent" to allow for the inject lang

(transformation) @function
(transformation_out_subidentifier) @keyword

