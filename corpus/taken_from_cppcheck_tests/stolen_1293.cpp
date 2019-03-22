class foo {
public:
    union {
        int i;
        float f;
    } d;
    void setf(float x) {
        d.f = x;
    }
};