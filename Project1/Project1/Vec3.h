#ifndef VEC3_H
#define VEC3_H

#include <math.h>

template <typename T>
class Vec3
{
public:
	T x, y, z;
	Vec3<T>() = default;
	Vec3<T>(T x, T y, T z) : x(x), y(y), z(z) {};
	Vec3<T>(T xyz) : x(xyz), y(xyz), z(xyz) {};
	Vec3 operator+(const Vec3& xyz);
	Vec3 Normalize();
	float distance_to(Vec3 xyz);
	float dot_product(Vec3 xyz);
	Vec3 cross_product(Vec3 xyz);
	float angle_between(Vec3 xyz);
};

#endif // !VEC3_H