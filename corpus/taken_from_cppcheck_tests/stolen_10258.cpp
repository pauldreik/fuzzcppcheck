int foo() {
    goto label;
    do {
     bar();
     label:
    } while (true);
}