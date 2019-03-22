void foo() {
    switch(a) {
        case A&&B:
            foo();
        case (A||B):
            foo();
        case A||B:
            foo();
    }
}