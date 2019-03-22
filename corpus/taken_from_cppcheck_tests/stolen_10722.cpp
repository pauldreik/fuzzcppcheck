typedef struct message_node {
  char code;
  size_t size;
  struct message_node *next, *prev;
} *message_list;
static message_list remove_message_from_list(message_list m) {
    m->prev->next = m->next;
    m->next->prev = m->prev;
    return m->next;
}