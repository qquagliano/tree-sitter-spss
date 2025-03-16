==================
Expression blocks
==================

BEGIN EXPR
END EXPR.

BEGIN EXPR
  /OUTFILE PREPXML='filespec'.
COMPUTE revenue = price*volume.
END EXPR.

---

(source_file
  (expression)
  (expression
    (expression_out_subcommand
      (expression_out_subidentifier)
      (arguments
        (keyword)
        (comparison)
        (string)
      )
    )
    (expression_source
      (command
        (identifier)
        (arguments
          (variable)
          (comparison)
          (variable)
          (arithmetic)
          (variable))
      (end_of_command)
      )
    )
  )
)
