template <> void foo<int *>()
{ x(); }

int main()
{
foo<int*>();
}
