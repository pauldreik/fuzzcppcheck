struct Fred {
    Data data;
    Fred & operator=(const Fred &rhs) {
        return *this;
    }
};