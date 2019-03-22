template<class Type>
class Foo {
    Foo<Type>& operator = ( Type* );
};
template<class Type>
Foo<Type>& Foo<Type>::operator = ( Type* pointer_ ) {
    pointer_=NULL;
    *pointer_=0;
    return *this;
}