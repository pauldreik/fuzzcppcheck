void f() {
    int a;
    ({
    switch(sizeof(int)) {
    case 4:
    default:
        (a)=0;
        break;
    };
    })
}