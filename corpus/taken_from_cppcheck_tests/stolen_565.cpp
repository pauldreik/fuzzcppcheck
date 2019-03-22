struct AB { int a[10]; int b[10]; };
int main() {
    struct AB ab;
    int * p = &ab.a[10]; 
    return 0;
}