template <int> struct Tag {};
template <int ID> using SPtr = std::shared_ptr<void(Tag<ID>)>;
SPtr<0> s;