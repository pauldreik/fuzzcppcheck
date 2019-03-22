float g_float = 1;
extern void SomeTestFunc(float);
void MyFuncNoError2()
{
    const float floatC = 2.2f;
    float floatTot = g_float * floatC;
    SomeTestFunc(floatTot);
}