int main()
{
    unsigned int k(0);
    std::cout << k << std::endl;
    k++;
    std::cout << k << std::endl;
    if(k) {
        k++;
    }
    std::cout << k << std::endl;
    k--;
    std::cout << k << std::endl;
    return 0;
}