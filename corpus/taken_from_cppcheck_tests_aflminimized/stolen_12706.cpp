int g ();
struct S {
  int i : (false ? g () : 1);
};