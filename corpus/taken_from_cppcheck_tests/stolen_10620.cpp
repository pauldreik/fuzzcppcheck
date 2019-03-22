struct object_info { int *typep; };
void packed_object_info(struct object_info *oi) {
  if (*oi->typep < 0);
}