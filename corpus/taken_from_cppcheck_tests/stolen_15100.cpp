struct Fred { int i; };
void foo()
{
    Fred* ptr = new Fred();
    ptr->i = 0;
    delete ptr;
}