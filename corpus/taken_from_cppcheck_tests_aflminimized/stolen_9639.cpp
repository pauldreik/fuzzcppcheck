void f()
{
    auto lambda = [](){return malloc(10);};
}
void x()
{
    f();
}