typedef void (*testfp)();
struct Fred
{
    testfp get1() { return 0; }
    void ( * get2 ( ) ) ( ) { return 0 ; }
    testfp get3();
    void ( * get4 ( ) ) ( );
};