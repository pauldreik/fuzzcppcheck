struct Fred {
    int array[10];
    int const & operator [] (unsigned int index) const { return array[index]; }
    int & operator [] (unsigned int index) { return array[index]; }
};