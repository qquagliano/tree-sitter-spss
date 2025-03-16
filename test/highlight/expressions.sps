BEGIN EXPR
* <- function .
* ^ ^   ^ function .
END EXPR.

BEGIN EXPR
* <- function .
* ^    ^ function .
  /OUTFILE PREPXML='filespec'.
* ^ keyword .
*          ^      ^ variable .
*                  ^ ^      ^ string .
COMPUTE revenue = price*volume.
* ^ ^ function .
*       ^       ^ variable .
*                 ^    ^    ^ variable .
END EXPR.
