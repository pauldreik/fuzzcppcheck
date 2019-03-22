void foo(double s)
{
    std::vector<double> vec;
    for( std::vector<double>::iterator it = vec.begin(); it != vec.end(); ++it )
    {
        vec.insert( it, s );
        for(unsigned int i = 0; i < 42; i++)
        {}
        *it;
    }
}