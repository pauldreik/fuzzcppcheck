Object::MemFunc() {
    class LocalClass {
    public:
        LocalClass() : dataLength_(0) {}
        std::streamsize dataLength_;
        double bitsInData_;
    } obj;
};