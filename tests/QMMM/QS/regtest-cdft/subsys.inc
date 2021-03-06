&SUBSYS
  &CELL
    ABC 15. 15. 15.
    PERIODIC XYZ
  &END CELL
  &TOPOLOGY
    COORD_FILE_NAME ${XYZFILE}
    COORD_FILE_FORMAT XYZ
    CONN_FILE_FORMAT PSF
    CONN_FILE_NAME HeH-water-noconstraint-dump-1.psf
  &END TOPOLOGY
  &KIND He
    BASIS_SET SZV-MOLOPT-SR-GTH
    POTENTIAL GTH-PBE-q2
  &END KIND
  &KIND H
    BASIS_SET SZV-MOLOPT-SR-GTH
    POTENTIAL GTH-PBE-q1
  &END KIND
  &KIND OW
    ELEMENT O
  &END KIND
  &KIND HW
    ELEMENT H
  &END KIND
&END SUBSYS