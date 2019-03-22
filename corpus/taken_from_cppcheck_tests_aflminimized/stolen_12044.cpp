bool create_iso_definition(cpp_reader *pfile, cpp_macro *macro) {
  cpp_token *token;
  cpp_hashnode **params = malloc(sizeof(cpp_hashnode *) * macro->paramc);
  memcpy(params, macro->params, sizeof(cpp_hashnode *) * macro->paramc);
}