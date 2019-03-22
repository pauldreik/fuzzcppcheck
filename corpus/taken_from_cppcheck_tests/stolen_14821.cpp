void foo()
{
    int a=10,b=20;
    while(a != 30) {
        std::cout<<a<<std::endl;
        int tmp=a;
        a=b;
        b=tmp;
    }
}