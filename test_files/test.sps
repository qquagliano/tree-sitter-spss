REGRESSION
  /MISSING LISTWISE
  /STATISTICS COEFF OUTS R ANOVA
  /CRITERIA = PIN(.05) POUT(.10) /* test comment 1
  /NOORIGIN "testing a string"
  /DEPENDENT api00
  /METHOD = ENTER acs_k3.

BEGIN PROGRAM PYTHON3
  import()
END PROGRAM.


* test comment 2

COMMENT test 3.
