int clear_extent_bit(struct extent_io_tree *tree, u64 start, u64 end, unsigned long bits, int wake, int delete, struct extent_state **cached_state, gfp_t mask) {
  struct extent_state *state;
}int clear_extent_dirty() {
  return clear_extent_bit(tree, start, end, EXTENT_DIRTY | EXTENT_DELALLOC |                           EXTENT_DO_ACCOUNTING, 0, 0, NULL, mask);
}