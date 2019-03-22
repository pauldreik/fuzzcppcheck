template <class T> class List {
public:
   List();
   virtual ~List();
   template< class Predicate > u_int DeleteIf( const Predicate &pred );
};
template< class T >
template< class Predicate > int
List<T>::DeleteIf( const Predicate &pred )
{}
