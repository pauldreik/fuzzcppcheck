void f() {
    try
    {
       foo();
    }
    catch(const exception& err)
    {
        throw err;
    }
}