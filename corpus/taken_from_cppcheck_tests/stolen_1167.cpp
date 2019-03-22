class A {
    private:
         std::map<unsigned int,unsigned int> _hash;
    public:
         A() : _hash() {}
         unsigned int fetch(unsigned int key)
         {
             return _hash[key];
         }
};