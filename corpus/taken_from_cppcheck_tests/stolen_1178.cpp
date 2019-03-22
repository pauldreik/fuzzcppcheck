namespace MyGUI
{
  namespace types
  {
    struct TSize {};
    struct TCoord {
      TSize size() const { }
    };
  }
  typedef types::TSize IntSize;
  typedef types::TCoord IntCoord;
}
class SelectorControl
{
  MyGUI::IntSize getSize()
  {
    return mCoordValue.size();
  }
private:
  MyGUI::IntCoord mCoordValue;
};