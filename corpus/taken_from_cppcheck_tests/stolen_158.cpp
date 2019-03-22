static void function(unsigned long **datap) {
    struct my_s *mr = global_structure_pointer;
    *datap = &mr->value;
}