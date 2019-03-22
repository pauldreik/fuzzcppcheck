class Fred {
private:
    int * a;
private:
    Fred() { a = new int; }
    ~Fred() { (delete(a), (a)=NULL); }
};