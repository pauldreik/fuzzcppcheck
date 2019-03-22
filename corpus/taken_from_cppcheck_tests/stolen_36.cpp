struct SquarePack {
   static bool isRank1Or8( Square &sq ) {
      sq &= 0x38;
      return sq == 0 || sq == 0x38;
    }
};
void foo() {
   assert( !SquarePack::isRank1Or8(push2) );
}
