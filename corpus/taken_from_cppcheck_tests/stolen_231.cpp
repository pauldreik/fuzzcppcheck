class SharedPtrHolder
{
   ::std::tr1::shared_ptr<int> pNum;
public:
   void SetNum(const ::std::tr1::shared_ptr<int> & apNum)
   {
      pNum = apNum;
   }
}