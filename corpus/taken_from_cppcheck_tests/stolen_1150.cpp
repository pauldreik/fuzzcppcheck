class SharedPtrHolder2
{
  public:
   typedef ::std::tr1::shared_ptr<int> IntSharedPtr;
  private:
   IntSharedPtr pNum;
  public :
   void SetNum(const IntSharedPtr & apNum)
   {
      pNum = apNum;
   }
};