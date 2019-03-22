class A {
public:
  typedef struct {
    int a[4];
  } data;
};
class B : public ::A::data { };