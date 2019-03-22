class MyString {
public:
    MyString() : m_ptr(0){}
    MyString& operator+=( const MyString& rhs );
    MyString append( const MyString& str )
    {       return operator+=( str ); } 
    char *m_ptr;
};