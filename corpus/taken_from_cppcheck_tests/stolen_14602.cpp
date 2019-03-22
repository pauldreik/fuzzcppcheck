struct AB { int a; };
void f(void) {
    struct AB ab;
    uninitvar_funcArgInTest(&ab);
    x = ab;
}
