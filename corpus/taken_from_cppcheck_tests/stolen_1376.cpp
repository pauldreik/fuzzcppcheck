class A 
{ 
    A(const A& other) { } 
    A& operator=(const A& other) { return *this; }
};