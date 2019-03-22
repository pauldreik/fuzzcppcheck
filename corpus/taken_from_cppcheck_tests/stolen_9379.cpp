using INT = int;

using PINT = INT *;
using PCINT = const PINT;
INT i;
PINT pi;
PCINT pci;void foo() {
    printf("%d %p %p", i, pi, pci);
};