extern std::string StringByReturnValue();
extern int         IntByReturnValue();
void MyFunction() {
    printf( "%s - %s", StringByReturnValue(), IntByReturnValue() );
}
