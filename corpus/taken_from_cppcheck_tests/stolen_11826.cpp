void foo()
{
    typedef std::basic_string<char, traits_type, allocator_type> string_type;
    try
    {
        throw string_type("leak");
    }
    catch (const string_type&)
    {
        pthread_exit (0);
    }
}