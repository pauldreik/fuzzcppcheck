int f1(int * pInterface, int x) { return 0; }

template< class interface_type > class Reference {
  template< class interface_type > int i();
  int *pInterface;
};

template< class interface_type > int Reference< interface_type >::i() {
    return f1(pInterface, interface_type::static_type());
}

Reference< class XPropertyList > dostuff();