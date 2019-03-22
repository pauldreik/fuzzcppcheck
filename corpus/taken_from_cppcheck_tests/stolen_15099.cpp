struct Fred { int i; };
void foo()
{
    Fred* ptr = new (std::nothrow) Fred();
    delete ptr;
}