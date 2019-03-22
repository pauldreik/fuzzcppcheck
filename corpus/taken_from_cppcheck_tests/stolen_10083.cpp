void f() {
    short x;

    switch (ab) {
        case A:
            x = 10;
            break;
        case B:
        default:
            break;
    }

    if (c) {
        x = foo();
        do_something(x);
    }
}