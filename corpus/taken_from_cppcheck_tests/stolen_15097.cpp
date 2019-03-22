struct Fred { int i; };
void foo()
{
    Fred* ptr = new Fred();
    delete ptr;
}