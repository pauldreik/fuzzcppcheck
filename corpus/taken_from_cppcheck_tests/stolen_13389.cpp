const int * foo ( ) {
const int x1 = 1 ;
f ( & x1 ) ;
const int x2 = 1 ;
f ( y , & x2 ) ;
const int x3 = 1 ;
t = & x3 ;
const int x4 = 1 ;
t = y + & x4 ;
const int x5 = 1 ;
z [ & x5 ] = y ;
const int x6 = 1 ;
v = { & x6 } ;
const int x7 = 1 ;
return & x7 ;
}