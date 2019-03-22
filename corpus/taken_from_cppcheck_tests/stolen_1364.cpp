namespace test1 {
   struct SWibble{};
   typedef SWibble wibble;
}
namespace test2 {
   struct SWibble : public test1::wibble {
   int Value;
   };
}