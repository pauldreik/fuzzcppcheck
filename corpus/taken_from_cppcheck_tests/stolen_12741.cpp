template <bool del, class T>
class _ConstTessMemberResultCallback_0_0<del, void, T>
   {
 public:
  typedef void (T::*MemberSignature)() const;

 private:
  const T* object_;
  MemberSignature member_;

 public:
  inline _ConstTessMemberResultCallback_0_0(
      const T* object, MemberSignature member)
    : object_(object),
      member_(member) {
  }
};