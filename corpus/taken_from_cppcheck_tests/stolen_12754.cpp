struct Fred {
    struct Info { };
};
void foo() {
    struct Fred::Info* info;
    info = new (nothrow) struct Fred::Info();
    info = new struct Fred::Info();
    memset(info, 0, sizeof(struct Fred::Info));
}