* test comment 1

* test comment 2.

COMMENT test comment 3.

BEGIN DATA
END DATA.

BEGIN DATA
1  3424  274 ABU DHABI 2
2 39932   86 AMSTERDAM 4
END DATA.

BEGIN EXPR
END EXPR.

BEGIN EXPR
  /OUTFILE PREPXML='filespec'.
COMPUTE revenue = price*volume.
END EXPR.

BEGIN GPL
END GPL.

BEGIN GPL
  SOURCE: s=userSource(id("graphdataset"))
END GPL.

BEGIN PROGRAM PYTHON3
END PROGRAM.

BEGIN PROGRAM PYTHON3
import scipy as sp
END PROGRAM.

TMS BEGIN
TMS END.

TMS BEGIN
  /DESTINATION OUTFILE='/mydir/mytransformations.xml'.
COMPUTE modelvar=ln(var).
TMS END.
