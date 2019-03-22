int f0(Args args) {
    return ^{
        return sizeof...(Args);
    }() + ^ {
        return sizeof...(args);
    }();
};