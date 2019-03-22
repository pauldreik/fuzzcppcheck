namespace ns1 {
    namespace ns2 {
        namespace ns3 {
            class Fred
            {
            private:
                char *str1;
                char *str2;
            public:
                Fred();
                ~Fred();
            };
        }
    }
}
ns1::ns2::ns3::Fred::Fred()
{
    str1 = new char[10];
    str2 = new char[10];
}

ns1::ns2::ns3::Fred::~Fred()
{
    delete [] str2;
}