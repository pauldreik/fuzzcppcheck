void mowgli_object_message_broadcast(mowgli_object_t *self, const char *name, ...) {
  va_list va;
  MOWGLI_LIST_FOREACH(n, self->klass->message_handlers.head) {
    if (!strcasecmp(sig2->name, name))
      break;
  }
  va_start(va, name);
  va_end(va);
}