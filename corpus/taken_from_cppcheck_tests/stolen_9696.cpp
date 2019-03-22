bool bob( char const **column_ptrs ) {
unique_ptr<char[]>otherbuffer{new char[otherbufsize+1]};
char *const oldbuffer = otherbuffer.get();
int const oldbufsize = otherbufsize;
}