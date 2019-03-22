void foo() {
   int* p( 42 );
   int i = 0;
   while ( i != 100 ) {
      *p = i;
      ++p;
      ++i;
   }
}