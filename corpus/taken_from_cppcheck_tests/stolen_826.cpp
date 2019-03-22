template <class _Tp>
class Vector
{
public:
    Vector() {
        _M_finish = new _Tp[ 42 ];
    }
    Vector( const Vector<_Tp>& v ) {
    }
     ~Vector();
     Vector& operator=(const Vector&v);
    _Tp* _M_finish;
};