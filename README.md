# Vector
A small library to create 3D vectors and perform basic operations on them.

## Basic functions
### Addition and subtraction
We have a few basic operations like addition and subtraction. For example, following the addition example in the Examples.cpp file,

    Vector v1 = Vector(2.0f, 3.0f, 1.0f);
    Vector v2 = Vector(3.0f, 4.0f, 1.0f);
    Vector v3 = v1 + v2;    
    v3.Print()

will print

    (5.000000, 7.000000, 2.000000)
 
### Multiplication
We also have multiplication by a scalar:

    Vector v4 = 2.0f * v1;
    v4.Print();
    
gives

    (6.000000, 8.000000, 2.000000)
    
This operations is also commutative.

### Dot and cross products
We can find the dot-product between two vectors:

    float v1Dotv2 = v1.Dot(v2);
    printf("v1.v2 = %f\n", v1Dotv2);
    
gives

    v1.v2 = 19.000000
    
Similarly, we can perform a cross-product

    Vector v7 = v1.Cross(v2);
    v7.Print();
    
gives

    (-1.000000, 1.000000, -1.000000)

The dot product between v1/v2 and v7 is also 0...but feel free to check.

### Normalization and length
We can normalize vectors and also find the length of a vector. The following code block normalizes a vector and then checks to see if the length of the resulting vector is indeed 1:

    Vector normed_v2 = v2.Normalization();
    normed_v2.Print();
    
will give

    (0.588348, 0.784465, 0.196116)
    
and then

    printf("|normed_v2| = %f\n", normed_v2.Length());
    
will of course give

    |normed_v2| = 1.000000
    
### The angle between two vectors
We need to use the Length and Dot methods to calculate the angle between two vectors:

    float v1_v7_angle = v1.Angle(v7);
    printf("Angle between v1 and v7 = %f degrees\n", v1_v7_angle);
    
will give

    Angle between v1 and v7 = 90.000000 degrees
    
obviously, because v1 and v7 are orthogonal.
