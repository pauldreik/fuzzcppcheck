int array[10];
int * foo() { return array; }
void f() {
    printf("%f", foo()[0]);
}
