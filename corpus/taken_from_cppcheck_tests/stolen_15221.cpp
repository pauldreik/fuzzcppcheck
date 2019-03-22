int fun() {
 static int fpUnread{0};
 const int var{fpUnread++};
 return var;
}
