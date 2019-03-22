struct IntPtrTypes
{
   typedef ::std::tr1::shared_ptr<int> Shared;
};
class SharedPtrHolder3
{
  private:
   IntPtrTypes::Shared pNum;
  public :
   void SetNum(const IntPtrTypes::Shared & apNum)
   {
      pNum = apNum;
   }
};