void f( ) {
struct S{
    int var[ 3 ];
} ;
S var[2];
var[0].var[ 0 ] = 0;
var[0].var[ 1 ] = 1;
var[0].var[ 2 ] = 2;
var[0].var[ 4 ] = 4;
}