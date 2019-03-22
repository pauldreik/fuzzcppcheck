auto f(int b) {
    return [=](int a){
        a += b;
        return [&](){ return a; };
    };
}
