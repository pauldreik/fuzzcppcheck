class ABC {
    void foo() {
        union {
            int i;
            float f;
        };
        struct Fee { } fee;
    }
    union {
        long long ll;
        double d;
    };
} abc;
