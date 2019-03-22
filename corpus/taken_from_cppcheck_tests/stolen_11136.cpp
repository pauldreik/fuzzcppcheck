template <> struct OutputU16<unsigned char> final {
    explicit OutputU16(std::basic_ostream<unsigned char> &t) : outputStream_(t) {}
    void operator()(unsigned short) const;
private:
    std::basic_ostream<unsigned char> &outputStream_;
};