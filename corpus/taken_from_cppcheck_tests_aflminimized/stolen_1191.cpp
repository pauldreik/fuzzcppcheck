template<>
class Hash<void> {
protected:
  typedef Key::key_type key_type;
  void set(const Key& key);
};
template<typename K, int KeySize>
class Hash : private Hash<void> {
  typedef Hash<void> inherited;
  void set(const Key& key) {
      inherited::set(inherited::Key(key));
  }
};
