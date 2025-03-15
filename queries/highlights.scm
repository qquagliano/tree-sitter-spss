; SECTION: Basic command and subcommands
(command name: (identifier) @function)
(subcommand name: (subidentifier) @keyword)

; SECTION: Misc nodes

(arguments) @variable
(string) @string
(number) @number

; SECTION: Comments

(comment) @comment

; SECTION: Special command types with their own blocks

(data
  (data_source) @variable ; for plain white highlighting
) @function ; for normal command highlighting

(expression
  (expression_out_subcommand
    (expression_out_subidentifier) @keyword ; for normal subcommand highlighting
  ) @variable
) @function

(gpl
  (gpl_source) @variable
) @function

(injection
  (language) @variable
  (injection_source) @none ; This is "transparent" to allow for the inject lang
) @function

(transformation
  (transformation_out_subcommand
    (transformation_out_subidentifier) @keyword
  ) @variable
) @function
