void foo(){
    int* p1 = new int(314); 
    int* p2 = new int(); 
    int* arr = new int[5](); 
    std::cout << *p1 << *p2 << arr[0]; 
}