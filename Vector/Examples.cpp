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
	// Test the dot product
	float v1Dotv2 = v1.Dot(v2);
	printf("v1.v2 = %f", v1Dotv2);
}