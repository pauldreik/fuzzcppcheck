typedef
    typename boost::mpl::if_c<
          _visitableIndex < boost::mpl::size< typename _Visitables::ConcreteVisitables >::value
          , ConcreteVisitable
          , Dummy< _visitableIndex >
    >::type ConcreteVisitableOrDummy;
