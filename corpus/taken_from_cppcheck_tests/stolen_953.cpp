struct A
{
 void g( struct sockaddr_in6& a);
private:
 std::string b;
};
void f()
{
 struct A fail;
 memset(&fail, 0, sizeof(struct A));
}