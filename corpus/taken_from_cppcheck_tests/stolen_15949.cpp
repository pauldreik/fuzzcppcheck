class Tokenizer { TokenList list; };

void Tokenizer::f() {
  std::list<int> x;
  list.do_something();
  Tokenizer::list.do_something();
}
