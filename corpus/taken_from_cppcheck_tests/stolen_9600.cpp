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
    rp1 = new TRadioButton(this);
    rp2 = new TRadioButton(this);
}