namespace std _GLIBCXX_VISIBILITY(default)
{
_GLIBCXX_BEGIN_NAMESPACE_CONTAINER
    typedef unsigned long _Bit_type;
    struct _Bit_reference
    {
        _Bit_type * _M_p;
        _Bit_type _M_mask;
        _Bit_reference(_Bit_type * __x, _Bit_type __y)
         : _M_p(__x), _M_mask(__y) { }
    };
}