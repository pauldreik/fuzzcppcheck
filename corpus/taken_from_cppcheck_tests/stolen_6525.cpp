bool b; bool bf();
char c; char cf();
signed char sc; signed char scf();
unsigned char uc; unsigned char ucf();
short s; short sf();
unsigned short us; unsigned short usf();
size_t st; size_t stf();
ptrdiff_t pt; ptrdiff_t ptf();
char * pc; char * pcf();
char cl[] = "123";
char ca[3];
void foo() {
    printf("%td %zd %d %d %d %d %d %d %d %d %d", ptf(), ptf(), bf(), cf(), scf(), ucf(), sf(), usf(), stf(), ptf(), pcf());
}
