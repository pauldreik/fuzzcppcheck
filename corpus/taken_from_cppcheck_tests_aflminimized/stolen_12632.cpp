int(*p1)[10]; 
void(*p2)(char); 
int(*(*p3)(char))[10];
float(*(*p4)(char))(long); 
short(*(*(*p5) (char))(long))(double);
int(*a1[10])(void); 
float(*(*a2[10])(char))(long);
short(*(*(*a3[10])(char))(long))(double);
::boost::rational(&r_)[9];
::boost::rational<T>(&r_)[9];