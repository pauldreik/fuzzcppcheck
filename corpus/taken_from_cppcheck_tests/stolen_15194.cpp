bool f(const int &i) {
 int X = i;
label:
 if ( X == 0 ) {
    X -= 101;
    return true;
 }
 if ( X < 1001 )  {
    X += 1;
    goto label;
 }
 return false;
}
