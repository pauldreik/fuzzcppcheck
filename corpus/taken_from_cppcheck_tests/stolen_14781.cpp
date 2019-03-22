struct Header {
  uint8_t message_type;
}

input.skip(sizeof(struct Header));