namespace NS {
template<int type> struct Barney;
template<> struct Barney<1> { };
template<int type>
class Fred {
public:
  Fred();
private:
  Barney<type> m_data;
};
template class Fred<1>;
}
