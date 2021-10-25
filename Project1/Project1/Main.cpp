#include <stdlib.h>
#include <stdio.h>
#include "Vec3.h"

int main()
{
	//First we create 4 sample vectors
	//Init without args
	Vec3<float> vec_0 = Vec3<float>();
	printf("Initial Vec3 = (%f, %f, %f)\n\n", vec_0.getX(), vec_0.getY(), vec_0.getZ());
	//Args as values
	Vec3<float> vec_1 = Vec3<float>(2, 5, 0);
	printf("First Vec3 = (%f, %f, %f)\n", vec_1.getX(), vec_1.getY(), vec_1.getZ());
	Vec3<float> vec_2 = Vec3<float>(7.0, 9.0, 12.0);
	printf("Second Vec3 = (%f, %f, %f)\n", vec_2.getX(), vec_2.getY(), vec_2.getZ());
	//Args as vectors
	Vec3<float> vec_3 = Vec3<float>(vec_2);
	printf("Third Vec3 = (%f, %f, %f) <-- Copy of vector 2\n\n", vec_3.getX(), vec_3.getY(), vec_3.getZ());

	//Adding vectors
	vec_3 = vec_1 + vec_2;
	printf("We change the value of the third vector to the result of adding the first and second.\nThird = First + Second = (%f, %f, %f)\n\n", vec_3.getX(), vec_3.getY(), vec_3.getZ());

	//Dot product
	printf("Dot product between First and Third = %f\n", vec_1.dot_product(vec_3));

	//Cross product
	Vec3<float> cross_p = vec_1.cross_product(vec_2);

	printf("Cross product between First and Second = (%f, %f, %f)\n", cross_p.getX(), cross_p.getY(), cross_p.getZ());

	//Normalization
	printf("Normalization of the cross product = (%f, %f, %f)\n", cross_p.Normalize().getX(), cross_p.Normalize().getY(), cross_p.Normalize().getZ());

	//Angle
	printf("Angle between Second and Third = %f\n", vec_2.angle_between(vec_3));
}