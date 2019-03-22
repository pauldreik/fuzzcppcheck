class UString {
public:
    UString& assign( const char* c_str );
    UString& operator=( const UString& s );
};
UString& UString::assign( const char* c_str ) {
    std::string tmp( c_str );
    return assign( tmp );
}
UString& UString::operator=( const UString& s ) {
    return assign( s );
}