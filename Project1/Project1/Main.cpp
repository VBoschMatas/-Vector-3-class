#include <stdlib.h>
#include <stdio.h>
#include "Vec3.h"

int main()
{
	//First we create 3 sample vectors
	Vec3<float> vec_0 = Vec3<float>();
	printf("Initial Vec3 = (%f, %f, %f)\n\n", vec_0.x, vec_0.y, vec_0.z);

	Vec3<float> vec_1 = Vec3<float>(2, 5, 0);
	printf("First Vec3 = (%f, %f, %f)\n", vec_1.x, vec_1.y, vec_1.z);
	Vec3<float> vec_2 = Vec3<float>(7.0, 9.0, 12.0);
	printf("Second Vec3 = (%f, %f, %f)\n", vec_2.x, vec_2.y, vec_2.z);
	Vec3<float> vec_3 = Vec3<float>(vec_2);
	printf("Third Vec3 = (%f, %f, %f) <-- Copy of vector 2\n\n", vec_3.x, vec_3.y, vec_3.z);

	vec_3 = Vec3<float>(vec_1 + vec_2);
	printf("Third = First + Second = (%f, %f, %f)\n", vec_3.x, vec_3.y, vec_3.z);

	printf("Dot product between First and Third = %f\n", vec_1.dot_product(vec_3));

	Vec3<float> cross_p = vec_1.cross_product(vec_2);

	printf("Cross product between First and Second = (%f, %f, %f)\n", cross_p.x, cross_p.y, cross_p.z);

	printf("Normalization of the cross product = (%f, %f, %f)\n", cross_p.Normalize().x, cross_p.Normalize().y, cross_p.Normalize().z);

	printf("Angle between Second and Third =  %f\n", vec_2.angle_between(vec_3));
}