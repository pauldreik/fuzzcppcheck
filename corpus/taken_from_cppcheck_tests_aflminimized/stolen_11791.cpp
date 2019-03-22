int main()
{
    typedef int (*func_ptr)(float, double);
    VERIFY((is_same<result_of<func_ptr(char, float)>::type, int>::value));
}