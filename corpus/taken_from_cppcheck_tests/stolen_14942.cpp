float g_float = 1;
extern void SomeTestFunc(float);
void MyFuncError()
{
    const float floatA = 2.2f;
    const float floatTot = g_float * floatA;
    SomeTestFunc(floatTot);
}