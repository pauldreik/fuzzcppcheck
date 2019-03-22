void foo()
{
    static const struct{ int x, y, w, h; } bounds = {1,2,3,4};
    return bounds.x + bounds.y + bounds.w + bounds.h;
}