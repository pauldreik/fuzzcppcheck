struct fast_string
{
    union
    {
        char buff[100];
    };
    void set_type(char t);
};
inline void fast_string::set_type(char t)
{
    buff[10] = t;
}