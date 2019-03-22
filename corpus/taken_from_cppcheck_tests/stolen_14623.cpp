struct FRED {
    int a;
    int b;
};

void f(void) {
   struct FRED fred;
   fred.a = do_something();
   if (fred.b == 0) { }
}
