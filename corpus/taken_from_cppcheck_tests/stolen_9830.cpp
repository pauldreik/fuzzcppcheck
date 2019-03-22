void f(std::vector<std::string> *values)
{
  values->clear();
  if (values) 
  {
    for (int i = 0; i < values->size(); ++i)
    {
      values->push_back("test");
    }
  }
}
