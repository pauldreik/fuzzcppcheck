void f(){
    char *c = NULL;
    char cBuf[10];
    sprintf(cBuf, "%s", c ? c : "0" );
}