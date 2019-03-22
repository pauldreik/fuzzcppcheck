void f(){
   int i; i = std::cin.get();
   while ( EOF != i ) {
        std::cout << i;
        i = std::cin.get();
   }
}