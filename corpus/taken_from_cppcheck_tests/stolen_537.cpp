struct s1 {
    unknown_type_t delay[3];
};

void x(unknown_type_t *delay, const int *net) {
    delay[0] = 0;
}

void y() {
    struct s1 obj;
    x(obj.delay, 123);
}