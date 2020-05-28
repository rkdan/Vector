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

Vector Vector::operator-(const Vector& vector) const
{
	Vector result = vector * (-1);
	result.x = x + result.x;
	result.y = y + result.y;
	result.z = z + result.z;
	return result;
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

Vector Vector::Normalized() const
{
	return *this * (1.0f / Length());
}

Vector Vector::Cross(const Vector& vector) const
{
	Vector result;
	result.x = y * vector.z - z * vector.y;
	result.y = z * vector.x - x * vector.z;
	result.z = x * vector.y - y * vector.x;
	return result;
}

float Vector::Angle(const Vector& vector) const
{
	const float dot = Dot(vector);
	const float len1 = Length();
	const float len2 = vector.Length();
	float result = (acos(dot / (len1 * len2))) * (180/(atan(1)*4));
	return result;
}
