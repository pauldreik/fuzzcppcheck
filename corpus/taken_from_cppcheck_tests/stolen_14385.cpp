void f()
{
    struct Relative {
        Surface *surface;
        void MoveTo(int x, int y) {
            surface->MoveTo();
        }
    };
}