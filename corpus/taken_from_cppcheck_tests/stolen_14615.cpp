struct PIXEL {
    union  {
        struct { unsigned char red,green,blue,alpha; };
        unsigned int color;
    };
};

unsigned char f() {
    struct PIXEL p1;
    p1.color = 255;
    return p1.red;
}