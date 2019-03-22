#include <stdio.h>
struct
{
    union
    {
        struct
        {
            int a;
        } struct1;
    };
} var = {0};
int main(int argc, char *argv[])
{
    printf("var.struct1.a = %d", var.struct1.a);
    return 1;
}
