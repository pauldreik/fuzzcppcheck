union Data { int id; int *ptr; };

class Fred {
private:
    int data_type;
    Data data;
public:
    Fred() : data_type(0)
    { }
};