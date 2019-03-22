template < typename T > class A { } ;

void f ( ) {
    A < int > a ;
}

template < typename T >
class B {
    void g ( ) {
        A < T > b = A < T > :: h ( ) ;
    }
} ;
