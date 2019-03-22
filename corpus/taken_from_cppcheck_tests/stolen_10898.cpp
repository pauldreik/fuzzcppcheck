class K {};int main()
{
    K k(1);
    std::cout << k << std::endl;
    if(k) {
        ++k;
    }
    k++;
    std::cout << k << std::endl;
    return 0;
}