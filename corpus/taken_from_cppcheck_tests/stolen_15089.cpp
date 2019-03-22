struct Fred { int a; };
void foo()
{
    Fred* fred = new Fred;
    std::cout << "test" << std::endl;
    delete fred;
}