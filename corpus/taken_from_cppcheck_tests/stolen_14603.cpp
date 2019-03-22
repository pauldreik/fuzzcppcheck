struct AB { int a; };
void f(void) {
    struct AB ab;
    uninitvar_funcArgOutTest(&ab);
    x = ab;
}
