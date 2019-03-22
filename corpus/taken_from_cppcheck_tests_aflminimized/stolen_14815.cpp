void foo()
{
    int i = 0,code=10,d=10;
    for(i = 0; i < 10; i++) {
        std::cout<<code<<std::endl;
        code += 2;
        if (i == 3) {
            return d;
        }
        d = code;
    }
}