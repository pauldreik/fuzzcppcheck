void foo(UNKNOWN) { }
void foo(int a) { }
void foo(unsigned int a) { }
void foo(unsigned long a) { }
void foo(unsigned long long a) { }
void foo(float a) { }
void foo(double a) { }
void foo(long double a) { }
int i;
unsigned int ui;
unsigned long ul;
unsigned long long ull;
float f;
double d;
long double ld;
int & ri = i;
unsigned int & rui = ui;
unsigned long & rul = ul;
unsigned long long & rull = ull;
float & rf = f;
double & rd = d;
long double & rld = ld;
const int & cri = i;
const unsigned int & crui = ui;
const unsigned long & crul = ul;
const unsigned long long & crull = ull;
const float & crf = f;
const double & crd = d;
const long double & crld = ld;
void foo() {
    foo(1);
    foo(1U);
    foo(1UL);
    foo(1ULL);
    foo(1.0F);
    foo(1.0);
    foo(1.0L);
    foo(i);
    foo(ui);
    foo(ul);
    foo(ull);
    foo(f);
    foo(d);
    foo(ld);
    foo(ri);
    foo(rui);
    foo(rul);
    foo(rull);
    foo(rf);
    foo(rd);
    foo(rld);
    foo(cri);
    foo(crui);
    foo(crul);
    foo(crull);
    foo(crf);
    foo(crd);
    foo(crld);
}