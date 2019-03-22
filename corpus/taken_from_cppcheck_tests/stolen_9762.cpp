void f(Document *doc) {
    int x = doc && doc->x;
    if (!doc) {
        return;
    }
}