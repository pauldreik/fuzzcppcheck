class Fred {
    std::function f;
    Fred() {
        f = [](){
            return 1;
        };
    }
};