int foo() {
    goto label;
    for (;;) {
     bar();
     label:
    }
}