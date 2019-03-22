template<typename Lhs, int TriangularPart = (int(Lhs::Flags) & LowerTriangularBit)>
struct ei_solve_triangular_selector;
template<typename Lhs, int UpLo>
struct ei_solve_triangular_selector<Lhs,UpLo> {
};
template<typename Lhs, int TriangularPart>
struct ei_solve_triangular_selector { };