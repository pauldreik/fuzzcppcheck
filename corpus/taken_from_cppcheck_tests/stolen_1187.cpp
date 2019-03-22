class MyString {
public:
    MyString() : m_ptr(0){}
    MyString& operator+=( const MyString& rhs ) {
            delete m_ptr;
            m_ptr = new char[42];
    }
    MyString append( const MyString& str )
    {       return operator+=( str ); } 
    char *m_ptr;
};