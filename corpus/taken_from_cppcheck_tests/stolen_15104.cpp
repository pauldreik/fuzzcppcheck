class Fred { public: int i; };
void foo()
{
    Fred* ptr = malloc(sizeof(Fred));
    ptr->i = 0;
    free(ptr);
}