namespace NS {
    class szp;
}
class NS::szp
{
  szp &operator =(int *other);
};
NS::szp &NS::szp::operator =(int *other) {}