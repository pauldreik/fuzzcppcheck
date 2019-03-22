class K {};
int main()
{
    volatile K k(0);
    std::cout << k << std::endl;
    k++;
    std::cout << k << std::endl;
    return 0;
}