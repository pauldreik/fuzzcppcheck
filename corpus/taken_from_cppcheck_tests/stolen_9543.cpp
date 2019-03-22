std::list< std::shared_ptr<int> > mList;
void test(){
  int *pt = new int(1);
  mList.push_back(std::shared_ptr<int>(pt));
}
