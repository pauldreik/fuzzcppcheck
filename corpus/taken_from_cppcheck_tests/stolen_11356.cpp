struct Internal {
    int operator()(const Args&... args) const {
        int n = sizeof...(Args);
        return n;
    }
};

int main() {
    Internal internal;
    int n = 0; n = internal(1);
    return 0;
}
