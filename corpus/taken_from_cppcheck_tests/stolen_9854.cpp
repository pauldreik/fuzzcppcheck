Fred *fred;
void a() {
    if (!fred) {
        initfred();
        fred->x = 0;
    }
}