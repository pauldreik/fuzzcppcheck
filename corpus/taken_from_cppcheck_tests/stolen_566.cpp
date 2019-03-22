struct AB { int a[10]; int b[10]; };
int main() {
    struct AB ab[1];
    int * p = &ab[0].a[10]; 
    return 0;
}