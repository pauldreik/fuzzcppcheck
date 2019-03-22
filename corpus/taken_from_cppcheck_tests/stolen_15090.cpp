struct Fred { int a; Fred() : a(0) {} };
void foo()
{
    Fred* fred = new Fred;
    std::cout << "test" << std::endl;
    delete fred;
}