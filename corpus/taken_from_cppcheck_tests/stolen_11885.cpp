class symbol_table {
public:
  typedef expression_error::error_code (*valid_func)(void *cbparam, const char *name, expression_space space);
  valid_func f;
};