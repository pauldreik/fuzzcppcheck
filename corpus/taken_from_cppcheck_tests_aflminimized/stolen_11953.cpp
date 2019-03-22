typedef void (*testfp)();
struct Fred
{
    testfp get1() { return 0; }
    void ( * get2 ( ) ) ( ) { return 0 ; }
    testfp get3();
    void ( * get4 ( ) ) ( );
};
testfp Fred::get3() { return 0; }
void ( * Fred::get4 ( ) ) ( ) { return 0 ; }