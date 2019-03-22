using INT = int;

using PINT = INT *;
using PCINT = const PINT;
INT i;
PINT pi;
PCINT pci;void foo() {
    printf("%f %f %f", i, pi, pci);
};