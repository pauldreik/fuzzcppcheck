class Fred {
    char *str1;
    ~Fred();
};
Fred::~Fred() {
    free(str1);
}