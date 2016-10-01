#include <iostream>

class Vector3D {
public:
    Vector3D(float x, float y, float z) : x(x), y(y), z(z) { }

    void print() { 
      std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl; 
    }

    Vector3D add(Vector3D other) {
      return Vector3D(x + other.x, y + other.y, z + other.z);
    }

private:
    float x;
    float y;
    float z;
};

int main() {
    Vector3D v1(1.0, 2.0, 3.0);
    std::cout << "v1: ";
    v1.print();

    Vector3D v2(0.5, 1.0, 1.5);
    std::cout << "v2: ";
    v2.print();
    std::cout << "v1.add(v2): ";
    v1.add(v2).print();

    // zadanie 01
    //std::cout << "v1 + v2: "; 
    //(v1 + v2).print();
    //std::cout << "v1 * 2: "; 
    //(v1 * 2).print();
    //std::cout << "-v1: "; 
    //(-v1).print();
    //std::cout << "v1 * v2: "; 
    //std::cout << (v1 * v2);

    // zadanie 03
    //std::cout << "cout << v2: ";
    //std::cout << v2 << std::endl;

    // zadanie 04
    //std::cout << "(float)v1: ";
    //std::cout << (float)v1 << std::endl;

    // zadania 06
    //std::cout << "(Vector2D)v2: ";
    //((Vector2D)v2).print();

    return 0;
}
