class SharedPtrHolder
{
  private:
   std::tr1::shared_ptr<int> pView;
  public:
   SharedPtrHolder()
   { }
   void SetView(const std::shared_ptr<int> & aView)
   {
      pView = aView;
   }
};