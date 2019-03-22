struct StaticListNode {
  StaticListNode(StaticListNode*& prev) : m_next(0) {}
  StaticListNode* m_next;
};