#include "Vector.h"
#include <stdio.h>

void main()
{
	// Define 2 vectors
	Vector v1 = Vector(2.0f, 3.0f, 1.0f);
	Vector v2 = Vector(3.0f, 4.0f, 1.0f);
	// Test the addition operator
	Vector v3 = v1 + v2;
	printf("v3 = ");
	v3.Print();
	// Test multiplication by a scalar, and check that it commutes
	Vector v4 = v1 * 2.0f;
	Vector v5 = 2.0f * v2;
	printf("v5 = ");
	v5.Print();
	// Test subtraction operator
	Vector v6 = v2 - v1;
	printf("v6 = ");
	v6.Print();
	// Test the dot product
	float v1Dotv2 = v1.Dot(v2);
	printf("v1.v2 = %f\n", v1Dotv2);
	// Test Normalization
	Vector normed_v2 = v2.Normalized();
	printf("normed_v2 = ");
	normed_v2.Print();
	// Check |normed_v2| = 1
	printf("|normed_v2| = %f\n", normed_v2.Length());
	// Check the cross product, and that the result is indeed othogonal to the others.
	Vector v7 = v1.Cross(v2);
	printf("v7 = ");
	v7.Print();
	printf("v7.v1 = %f\n", v1.Dot(v7));
	printf("v7.v2 = %f\n", v2.Dot(v7));
	// The angle between two orthogonal vectors should be 90 degrees
	float v1_v7_angle = v1.Angle(v7);
	printf("Angle between v1 and v7 = %f degrees\n", v1_v7_angle);
}