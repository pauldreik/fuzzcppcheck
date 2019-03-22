void foo()
{
    int code=10,d=10;
    do {
        std::cout<<code<<std::endl;
        code += 2;
        g(d);
        d += code;
    } while(code < 20);
}