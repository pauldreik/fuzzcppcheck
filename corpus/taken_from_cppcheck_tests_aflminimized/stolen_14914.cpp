class MyException
{
    virtual void raise() const
    {
        throw *this;
    }
}