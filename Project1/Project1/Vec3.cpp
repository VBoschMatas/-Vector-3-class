#include "Vec3.h"

//Operator +
template <typename T>
Vec3<T> Vec3<T>::operator+(const Vec3& xyz) {
	return Vec3<T>(x + xyz.x, y + xyz.y, z + xyz.z);
}

//Normalize
template <typename T>
Vec3<T> Vec3<T>::Normalize() {
	float mag;
	mag = sqrt(pow(x, 2) + pow(y, 2) + pow(z, 2));
	return Vec3<T>(x / mag, y / mag, z / mag);
}

//Distance To
template <typename T>
float Vec3<T>::distance_to(Vec3 xyz) {
	T x_aux, y_aux, z_aux;
	x_aux = x - xyz.x;
	y_aux = y - xyz.y;
	z_aux = z - xyz.z;
	return sqrt(pow(x_aux, 2.0) + pow(y_aux, 2.0) + pow(y_aux, 2.0));
}

//Dot Product
template <typename T>
float Vec3<T>::dot_product(Vec3 xyz) {
	T x_aux, y_aux, z_aux;
	x_aux = x * xyz.x;
	y_aux = y * xyz.y;
	z_aux = z * xyz.z;
	return x_aux + y_aux + z_aux;
}

//Cross Product
template <typename T>
Vec3<T> Vec3<T>::cross_product(Vec3 xyz) {
	T x_aux, y_aux, z_aux;
	x_aux = y * xyz.z - z * xyz.y;
	y_aux = z * xyz.x - x * xyz.z;
	z_aux = x * xyz.y - y * xyz.x;
	return Vec3<T>(x_aux, y_aux, z_aux);
}

//Angle Between
template <typename T>
float Vec3<T>::angle_between(Vec3 xyz) {
	Vec3<T> aux = Vec3<T>(x, y, z);
	aux = aux.Normalize();
	float dot_prod = aux.dot_product(xyz.Normalize());
	return acos(dot_prod) * 57.29578;
}

template class Vec3<char>;
template class Vec3<unsigned char>;
template class Vec3<short>;
template class Vec3<unsigned short>;
template class Vec3<int>;
template class Vec3<unsigned int>;
template class Vec3<long>;
template class Vec3<unsigned long>;
template class Vec3<float>;
template class Vec3<double>;
template class Vec3<long double>;
