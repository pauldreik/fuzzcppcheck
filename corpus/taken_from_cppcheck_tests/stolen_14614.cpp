struct conf {
    char x;
};

void do_something(struct conf ant_conf);

void f(void) {
   struct conf c;
   initdata(&c);
   do_something(c);
}
