static void foo() {
    struct ABC *abc = malloc(123);
    abc->a = abc->b = malloc(10);
}