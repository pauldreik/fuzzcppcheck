static void foo()
{
 struct msn_entry *ptr;
 ptr = malloc(sizeof(struct msn_entry));
 ptr->msn = malloc(100);
 back = ptr;
}