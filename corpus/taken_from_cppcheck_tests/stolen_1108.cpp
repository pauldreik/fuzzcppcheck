class Fred {
    std::list<const std::string &> x;
public:
    std::list<const std::string &> get() { return x; }
};