template <typename T>
struct PtrTypes
{
   typedef ::std::tr1::shared_ptr<T> Shared;
};
class SharedPtrHolder4
{
  private:
   PtrTypes<int>::Shared pNum;
  public :
   void SetNum(const PtrTypes<int>::Shared & apNum)
   {
      pNum = apNum;
   }
};