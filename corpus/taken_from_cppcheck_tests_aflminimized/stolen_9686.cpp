static void foo() {
    struct ABC *abc = malloc(sizeof(struct ABC));
    abc->next = malloc(sizeof(struct ABC));
    abc->next->next = NULL;

    while (abc) {
        struct ABC *next = abc->next;
        free(abc);
        abc = next;
    }
}