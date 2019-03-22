struct float3 { };
typedef float3 vec;
class Plane {
    vec Refract(vec &vec) const;
    bool IntersectLinePlane(const vec &planeNormal);
}; 