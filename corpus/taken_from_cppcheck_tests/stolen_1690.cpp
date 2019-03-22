void f() {
    try
    {
       foo();
    }
    catch(const exception& err)
    {
        exception err2;
        throw err2;
    }
}