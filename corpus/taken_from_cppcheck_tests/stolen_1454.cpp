struct Fred {
    std::vector<int> ints;
    Fred & operator=(const Fred &rhs) {
        return *this;
    }
};