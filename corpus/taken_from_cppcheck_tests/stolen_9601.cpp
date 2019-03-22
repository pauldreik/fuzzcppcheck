class TRadioButton { };
class Foo
{
private:
    TRadioButton* rp1;
    TRadioButton* rp2;
public:
    Foo();
};
Foo::Foo()
{
    rp1 = new TRadioButton;
    rp2 = new TRadioButton;
}