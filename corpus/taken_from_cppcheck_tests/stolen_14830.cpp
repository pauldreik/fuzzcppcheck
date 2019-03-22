void foo()
{
    int code=10;
    do {
        if(true) {
            std::cout<<code<<std::endl;
            code += 2;
        }
    } while(code < 20);
}