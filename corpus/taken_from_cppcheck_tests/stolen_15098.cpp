struct Fred { int i; };
void foo()
{
    Fred* ptr = new (nothrow ) Fred();
    delete ptr;
}