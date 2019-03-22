template <>
inline uint16_t htobe(uint16_t value) {
     return ( __extension__ ({
         register unsigned short int __v, __x = (unsigned short int) (value);
         if (__builtin_constant_p (__x))
             __v = ((unsigned short int) ((((__x) >> 8) & 0xff) | (((__x) & 0xff) << 8)));
         else
             __asm__ ("rorw $8, %w0" : "=r" (__v) : "0" (__x) : "cc");
         (void)__v;
     }));
}