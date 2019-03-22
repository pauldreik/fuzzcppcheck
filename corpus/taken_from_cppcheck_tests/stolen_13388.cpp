const char * foo ( ) {
const char x1 = 'b' ;
f ( & x1 ) ;
const char x2 = 'b' ;
f ( y , & x2 ) ;
const char x3 = 'b' ;
t = & x3 ;
const char x4 = 'b' ;
t = y + & x4 ;
const char x5 = 'b' ;
z [ & x5 ] = y ;
const char x6 = 'b' ;
v = { & x6 } ;
const char x7 = 'b' ;
return & x7 ;
}