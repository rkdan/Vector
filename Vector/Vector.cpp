#include "Vector.h"
#include <stdio.h>
#include <cmath>

Vector::Vector(float x_init, float y_init, float z_init)
	:
	x(x_init),
	y(y_init),
	z(z_init)
{
}

Vector Vector::operator+(const Vector& vector) const
{
	return Vector(x + vector.x, y + vector.y, z + vector.z);
}

Vector Vector::operator*(const float scalar) const
{
	return Vector(scalar * x, scalar * y, scalar * z);
}

void Vector::Print()
{
	printf("(%f, %f, %f)\n", x, y, z);
}

float Vector::Dot(const Vector& vector) const
{
	float res = x * vector.x + y * vector.y + z * vector.z;
	return res;
}

float Vector::LengthSq() const
{
	return x * x + y * y + z * z;
}

float Vector::Length() const
{
	return std::sqrt(LengthSq());
}
