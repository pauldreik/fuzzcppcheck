void a(char *p) {
    f( { if(finally_arg); } );
}

void b() {
    char arr[64];
    a(arr);
}