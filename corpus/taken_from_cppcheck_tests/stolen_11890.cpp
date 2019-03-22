typedef struct Fred { } Fred;
Fred * foo() {
    Fred *fred;
    fred = se_alloc(sizeof(struct Fred));
    return fred;
}