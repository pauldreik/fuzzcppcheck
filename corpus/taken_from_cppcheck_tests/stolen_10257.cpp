int foo() {
    goto label;
    while (true) {
     bar();
     label:
    }
}