class Lock
{
public:
    Lock(int i)
    {
        std::cout << "Lock " << i << std::endl;
    }
    ~Lock()
    {
        std::cout << "~Lock" << std::endl;
    }
};
int main()
{
    Lock(123);
    std::cout << "hello" << std::endl;
    return 0;
}
