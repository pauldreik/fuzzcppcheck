void foo()
{
    int code=10,d=10;
    while(code < 20) {
        std::cout<<code<<std::endl;
        code += 2;
        g(d);
        d += code;
    }
}