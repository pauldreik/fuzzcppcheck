void f() {
  struct ABC *abc = malloc(100);
  abc.a = (char *) malloc(10);
  list_add_tail(&abc->list, head);
}