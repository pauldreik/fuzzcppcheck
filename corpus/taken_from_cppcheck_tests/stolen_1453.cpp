struct Fred {
    uint8_t data;
    Fred & operator=(const Fred &rhs) {
        return *this;
    }
};