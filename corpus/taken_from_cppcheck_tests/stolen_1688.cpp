void f() {
    try
    {
       foo();
    }
    catch(exception& err)
    {
        throw err;
    }
}