void A::func(P g) const {}
void A::a() {
   b = new d(  [this]( const P & p) -> double { return this->func(p);}  );
}