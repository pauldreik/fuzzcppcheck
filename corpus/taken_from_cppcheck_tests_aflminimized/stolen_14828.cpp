void foo()
{
    int code=10;
    for(int i=0; i < 10; i++) {
        if(true) {
            std::cout<<code<<std::endl;
        }
        code += 2;
    }
}