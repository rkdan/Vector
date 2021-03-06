#pragma once

class Vector
{
public:
	Vector() = default;
	Vector(float x_init, float y_init, float z_init);
	Vector operator+(const Vector& vector) const;
	Vector operator*(const float scalar) const;
	// To make the multiplication operator commutative
	friend Vector operator*(const float scalar, const Vector vector)
	{
		return Vector(scalar * vector.x, scalar * vector.y, scalar * vector.z);
	}
	Vector operator-(const Vector& vector) const;
	void Print();
	float Dot(const Vector& vector) const;
	float LengthSq() const;
	float Length() const;
	Vector Normalized() const;
	Vector Cross(const Vector& vector) const;
	float Angle(const Vector& vector) const;
private:
	float x;
	float y;
	float z;
};