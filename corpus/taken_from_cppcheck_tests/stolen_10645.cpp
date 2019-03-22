const int& getA(){static int a;return a;}
int main()
{
    const int a(getA());
    return 0;
}