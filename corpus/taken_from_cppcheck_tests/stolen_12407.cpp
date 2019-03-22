class ReplayIteratorImpl{
  int Compare(ReplayIteratorImpl* other) {
    int cmp;
    int ret = cursor_->compare(cursor_, other->cursor_, &cmp);
    return (cmp);
  }
  WT_CURSOR *cursor_;
};