template <typename Iterator>
void ForEach() { }
template <typename Type>
class Vector2 : public Vector {
    template <typename Iterator>
    void ForEach();
public:
    void process();
};
template <typename Type>
void Vector2<Type>::process() {
    ForEach<iterator>();
}
Vector2<string> c;