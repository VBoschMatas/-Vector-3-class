#ifndef VEC3_H
#define VEC3_H

#include <math.h>
#include <assert.h>

template <typename T>
class Vec3
{
private:
	T x, y, z;
public:
	Vec3<T>() = default;
	Vec3<T>(T x, T y, T z) : x(x), y(y), z(z) {};
	Vec3<T>(T xyz) : x(xyz), y(xyz), z(xyz) {};
	Vec3 operator+(const Vec3& xyz);
	Vec3 Normalize();
	T distance_to(const Vec3& xyz);
	T dot_product(const Vec3& xyz);
	Vec3 cross_product(const Vec3& xyz);
	T angle_between(const Vec3& xyz);

private: 
	T VectorNorm(T _x, T _y, T _z) const { return sqrt(_x * _x + _y * _y + _z * _z); };

public:
	T getX() const { return x; };
	T getY() const { return y; };
	T getZ() const { return z; };
};

#endif // !VEC3_H