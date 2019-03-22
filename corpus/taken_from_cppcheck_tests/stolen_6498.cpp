namespace bar { int f() { return 0; } }
void foo() { printf("%d %u %lu %f %Lf %p", bar::f(), bar::f(), bar::f(), bar::f(), bar::f(), bar::f()); }