unsigned short foo()
{
    test_client CClient;
    try
    {
        if (CClient.Open())
        {
            return 0;
        }
    }
    catch (...)
    {
        return 2;
    }

    try
    {
        CClient.Close();
    }
    catch (...)
    {
        return 2;
    }

    return 1;
}