void foo()
{
    int i = 0,a=10,b=20;
    for(i = 0; i < 10; i++) {
        std::cout<<a<<std::endl;
        int tmp=a;
        a=b;
        b=tmp;
    }
}