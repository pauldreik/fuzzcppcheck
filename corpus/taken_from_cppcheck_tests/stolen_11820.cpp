typedef struct string { } string;
void foo (LIST *module_name)
{
    bar(module_name ? module_name->string : 0);
}