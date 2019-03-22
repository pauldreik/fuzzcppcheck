typedef int ( * Function ) ( ) ;
void f ( ) {
    ((Function * (*) (char *, char *, int, int)) global[6]) ( "assoc", "eggdrop", 106, 0);
}