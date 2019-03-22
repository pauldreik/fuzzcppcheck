class const_tree_iterator {
  const_tree_iterator(bool (*_incream)(node_type*&)) {}
  const_tree_iterator& parent() {
    return const_tree_iterator(foo);
  }
};