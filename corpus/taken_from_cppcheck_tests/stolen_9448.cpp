void MyFunction()
{
    char* data; data = new char[100];
    try
    {
    }
    catch(err)
    {
        delete[] data;
        MyThrow(err);
    }
    delete[] data;
}
void MyThrow(err)
{
    throw(err);
}