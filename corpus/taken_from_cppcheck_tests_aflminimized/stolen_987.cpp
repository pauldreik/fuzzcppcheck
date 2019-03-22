union ASFStreamHeader {
  struct AVMPACKED {
    union  {
      struct AVMPACKED {
        int width;
      } vid;
    };
  } hdr;
};void parseHeader() {
  ASFStreamHeader strhdr;
  memset(&strhdr, 0, sizeof(strhdr));
}