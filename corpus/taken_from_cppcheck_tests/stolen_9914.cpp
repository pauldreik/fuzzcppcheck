void f(int* ptr, int cnt){
 if (!ptr)
  cnt = 0;
 for (int i = 0; i < cnt; ++i)
  *ptr++ = 0;
}