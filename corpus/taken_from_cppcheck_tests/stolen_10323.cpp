struct A{
  enum {
    b = 300
  };
};
const int DFLT_TIMEOUT = A::b % 1000000 ;
