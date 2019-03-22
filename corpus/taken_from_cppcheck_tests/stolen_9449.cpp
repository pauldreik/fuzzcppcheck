void MyFunction()
{
    char* data; data = new char[100];
    try
    {
    }
    catch(err)
    {
        delete[] data;
        MyExit(err);
    }
    delete[] data;
}
void MyExit(err)
{
    exit(err);
}