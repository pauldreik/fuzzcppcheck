void f() {
  if (strcmp("A","A")){}
  if (strncmp("A","A",1)){}
  if (strcasecmp("A","A")){}
  if (strncasecmp("A","A",1)){}
  if (memcmp("A","A",1)){}
  if (strverscmp("A","A")){}
  if (bcmp("A","A",1)){}
  if (wcsncasecmp(L"A",L"A",1)){}
  if (wcsncmp(L"A",L"A",1)){}
  if (wmemcmp(L"A",L"A",1)){}
  if (wcscmp(L"A",L"A")){}
  if (wcscasecmp(L"A",L"A")){}
}