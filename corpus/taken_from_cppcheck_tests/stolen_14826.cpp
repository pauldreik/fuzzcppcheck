void foo()
{
    int a=10,b=20;
    do {
        std::cout<<a<<std::endl;
        int tmp=a;
        a=b;
        b=tmp;
    } while( a!=30 );
}