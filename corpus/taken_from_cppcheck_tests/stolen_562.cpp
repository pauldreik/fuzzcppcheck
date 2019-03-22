int f( ){ 
struct Struct{
    int arr[ 3 ];
};
int y;
Struct var;
var.arr[ 0 ] = 0;
var.arr[ 1 ] = 1;
var.arr[ 2 ] = 2;
var.arr[ 3 ] = 3;
y=var.arr[ 3 ];
return y;
}