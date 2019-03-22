class Fred {
    std::list<std::string &> x;
public:
    std::list<std::string &> get() { return x; }
};