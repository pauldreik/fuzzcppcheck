struct Example {
   char buffer[200];
};
void foo() {
   struct Example example;
   if (example.buffer == "test") ;
}
