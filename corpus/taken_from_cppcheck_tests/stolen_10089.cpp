void foo() {
   int* p( 42 );
   int i = 0;
   int dummy = 0;
   while ( i != 100 ) {
      p = & dummy;
      *p = i;
      ++p;
      ++i;
   }
}