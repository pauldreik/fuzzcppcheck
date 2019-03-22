class Fred {
public:
    std::shared_ptr<Data> getData();
private:
     std::shared_ptr<Data> data;
};

std::shared_ptr<Data> Fred::getData() { return data; }