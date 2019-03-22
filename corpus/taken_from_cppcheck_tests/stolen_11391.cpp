int evallex() {
  int c, t;
again:
   do {
      if ((c = macroid(c)) == EOF_CHAR || c == '\n') {
      }
   } while ((t = type[c]) == LET && catenate());
}
