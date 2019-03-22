class noncopyable {
protected:
    noncopyable() {}
    ~noncopyable() {}

private:
    noncopyable( const noncopyable& );
    const noncopyable& operator=( const noncopyable& );
};

class Base : private noncopyable {};

class Foo : public Base {
public:
    Foo() : m_ptr(new int) {}
    ~Foo() { delete m_ptr; }
private:
    int* m_ptr;
};