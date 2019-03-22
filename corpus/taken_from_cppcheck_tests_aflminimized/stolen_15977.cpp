class BCLass : public Ticket<void> {
  BCLass();
  PClass* member;
};
BCLass::BCLass() : Ticket<void>() {
  member = 0;
}