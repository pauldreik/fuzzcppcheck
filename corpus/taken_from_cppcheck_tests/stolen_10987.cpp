template<class T> class AtSmartPtr : public ConstCastHelper<AtSmartPtr<const T>, T>
{
    friend struct ConstCastHelper<AtSmartPtr<const T>, T>;
    AtSmartPtr(const AtSmartPtr<T>& r);
};