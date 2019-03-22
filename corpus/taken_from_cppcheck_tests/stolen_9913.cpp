bool foo() {
     char* c = 0;
     return typeid(*c) == typeid(*c);
}