int compare1(int temp);
namespace Foo {
    bool compare1(int temp);
    void f(){
        int temp = 4;
        if(compare1(temp) > compare2(temp)){
            printf("foo");
        }
    }
}