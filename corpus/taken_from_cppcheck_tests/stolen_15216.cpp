int foo() {
   using namespace ::com::sun::star::i18n;
   bool b = false;
   int j = 0;
   for (int i = 0; i < 3; i++) {
          if (!b) {
             j = 3;
             b = true;
          }
   }
   return j;
}