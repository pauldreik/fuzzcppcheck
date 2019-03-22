void f(struct AB *ab) {
    ab->data->x = 1;
    ab = &ab1;
    ab->data->x = 2;
}