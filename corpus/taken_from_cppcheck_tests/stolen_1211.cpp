struct Fred {
    int array[10];
    int const & operator [] (unsigned int index) { return array[index]; }
};