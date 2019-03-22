void foo()
{
    Fred* fred = malloc(sizeof(Fred));
    std::cout << "test" << std::endl;
    free(fred);
}