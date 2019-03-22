void f() {
    bool success = false;
    int notReducable(someClass.getX(&success));
    if (success) {
        foo(notReducable);
    }
}