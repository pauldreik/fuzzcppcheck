void f(struct ABC *abc) {
    int x = abc && a(abc->x);
    if (abc) { }
}