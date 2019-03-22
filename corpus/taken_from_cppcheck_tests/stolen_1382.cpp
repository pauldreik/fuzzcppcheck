class A 
{ 
    A& operator=(const int &x) { this->x = x; return *this; }
    int x;
};