void f(){
   char ch; ch = std::cin.get();
   while (EOF != ch) {
        std::cout << ch;
        ch = std::cin.get();
   }
}