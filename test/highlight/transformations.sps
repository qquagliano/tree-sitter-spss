TMS BEGIN
* <- function .
* ^    ^ function .
TMS END.

TMS BEGIN
* <- function .
* ^   ^  function .
  /DESTINATION OUTFILE='/mydir/mytransformations.xml'.
* ^ keyword .
*              ^      ^ variable .
*                        ^ string .
COMPUTE modelvar=ln(var).
* ^ function .
*       ^ variable .
TMS END.
