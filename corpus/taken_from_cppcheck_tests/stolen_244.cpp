auto f() {
    return [=](){
        int a = 1;
        return [&](){ return a; };
    };
}
