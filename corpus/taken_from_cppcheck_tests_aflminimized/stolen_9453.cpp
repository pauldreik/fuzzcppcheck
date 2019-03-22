void foo() {
   bool done = false;
   do {
       char *bar = malloc(10)
       if(condition()) {
           free(bar);
           continue;
       }
       done = true;
       free(bar)
   } while(!done);
   return;}