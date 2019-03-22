void bar()
{
    int * piArray = NULL;
    unsigned int uiArrayLength = 2048;
    unsigned int uiIndex;

    try
    {
        piArray = new int[uiArrayLength];
    }
    catch (...)
    {
        SOME_MACRO
        delete [] piArray;
        return;
    }
    for (uiIndex = 0; uiIndex < uiArrayLength; uiIndex++)
    {
        piArray[uiIndex] = -1234;
    }
    delete [] piArray;
}