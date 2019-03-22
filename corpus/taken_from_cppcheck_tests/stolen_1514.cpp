class C
{
    FILE *fp;

public:
    explicit C(FILE *fp);
};

C::C(FILE *fp) {
    C::fp = fp;
}