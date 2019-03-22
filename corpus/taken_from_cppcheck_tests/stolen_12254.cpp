void f()
{
    vector<int> v;
    vector.push_back(1);
    vector.push_back(2);
    for (vector<int>::iterator it = v.begin(); it != v.end(); ++it)
    {
        if (*it == 1)
            v.push_back(10);
    }
}