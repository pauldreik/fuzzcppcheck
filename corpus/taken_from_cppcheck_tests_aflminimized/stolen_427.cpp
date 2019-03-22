void f(){
 int temp = 4;
 bool a = true;
 if(compare(temp) > a){
     printf("foo");
 }
}
bool compare(int temp){
  if(temp==4){
     return true;
  }
    else
     return false;
}