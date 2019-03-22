typedef float vec3[3];
typedef float mat3x3[3][3];
vec3 v3;
mat3x3 m3x3;
const vec3 &gv() { return v3; }
const mat3x3 &gm() { return m3x3; }
class Fred {
public:
    vec3 &v();
    mat3x3 &m();
    const vec3 &vc() const;
    const mat3x3 &mc() const;
};
vec3 & Fred::v() { return v3; }
mat3x3 & Fred::m() { return m3x3; }
const vec3 & Fred::vc() const { return v3; }
const mat3x3 & Fred::mc() const { return m3x3; }