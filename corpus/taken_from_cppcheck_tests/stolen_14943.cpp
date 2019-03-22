float g_float = 1;
extern void SomeTestFunc(float);
void MyFuncNoError()
{
    const float floatB = 2.2f;
    const float floatTot = floatB * g_float;
    SomeTestFunc(floatTot);
}