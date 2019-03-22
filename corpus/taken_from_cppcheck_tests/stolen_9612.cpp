class Fred {
private:
    int * a;
public:
    Fred(const Fred &fred) { a = new int; }
    ~Fred() { delete a; }
};