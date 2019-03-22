class x {
    ~x() {
        if(!std::uncaught_exception()) {
            throw e;
        }
    }
}