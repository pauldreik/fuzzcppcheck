const int& getA(){static int a;return a;}
int main()
{
    int getA = 0;
    const int a = getA + 3;
    return 0;
}