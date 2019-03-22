int f(int x)  {
    int iter;
    {
        union
        {
            int asInt;
            double asDouble;
        };

        iter = x;
    }
    return 1 + iter;
}