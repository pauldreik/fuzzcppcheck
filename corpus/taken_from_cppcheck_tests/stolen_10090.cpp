int main() {
   size_t myCounter = 0;
   Test myTest([&](size_t aX){
       std::cout << myCounter += aX << std::endl;
   });
}