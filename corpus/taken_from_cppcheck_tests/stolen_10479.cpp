std::string stringMerge(std::string const& x, std::string const& y) {
    return ((x > y) ? (y + x) : (x + y));
}