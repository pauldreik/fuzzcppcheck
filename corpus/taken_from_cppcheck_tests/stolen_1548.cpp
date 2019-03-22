Object::MemFunc() {
    class LocalClass : ::copy_protected {
    public:
        LocalClass() : copy_protected(1), dataLength_(0) {}
        std::streamsize dataLength_;
        double bitsInData_;
    } obj;
};