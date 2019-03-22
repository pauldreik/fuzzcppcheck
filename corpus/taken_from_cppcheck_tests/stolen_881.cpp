namespace NS {
    class szp;
}
class NS::szp
{
  NS::szp &operator =(int *other);
};
NS::szp &NS::szp::operator =(int *other) {}