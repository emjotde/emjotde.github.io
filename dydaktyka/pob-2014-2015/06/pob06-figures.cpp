#include <iostream>

#define MAX_VERTICES 10

class Point {

public:
    float x;
    float y;

    Point() : x(0.0), y(0.0) { }
    Point(float x, float y) : x(x), y(y) { }

    void print() { std::cout << "(" << x << "," << y << ")"; }
};

class Figure {

public:
    Figure() { 
        vertices = new Point[MAX_VERTICES];
        vertices_amount = 0;
    }

    Figure(float x, float y, int n) {
        this->position.x = x;
        this->position.y = y;

        vertices = new Point[MAX_VERTICES];
        vertices_amount = n;
    }

    Point get_position() { return position; }
    int get_vertices_amount() { return vertices_amount; }
    Point get_vertex(int i) { return vertices[i]; }

    virtual float area() = 0;

    void print() { 
        std::cout << "Figura o srodku w ";
        position.print(); 
        std::cout << " i " << vertices_amount << " wierzcholkach" << std::endl; 
    }

protected:
    Point *vertices;
    int vertices_amount;

// zadanie 03
//private:
    Point position;
};

class Square : public Figure {

public:
    Square(float x, float y, float a) {
        this->position.x = x;
        this->position.y = y;
        this->a = a; 
        this->vertices_amount = 4;

        vertices[0] = Point(x - a / 2, y - a / 2);
        vertices[1] = Point(x - a / 2, y + a / 2);
        vertices[2] = Point(x + a / 2, y + a / 2);
        vertices[3] = Point(x + a / 2, y - a / 2);
    }

    float area() { return a*a; }
    
    void print() { 
        std::cout << "Kwadrat o srodku w ";
        get_position().print();
        std::cout << " i " << vertices_amount << " wierzcholkach ";
        // zadanie 05a - wypisywanie wierzcholkow figury
        std::cout << std::endl; 
    }

private:
    float a;
};


int main() {
    Square square(1.0, 1.0, 2.0);
    square.print();

    // zadanie 08
    /*
    Square base_square(0.0, 0.0, 2.0);
    base_square.print();

    float scales[3] = { 2.0, 0.5, 0.25 };

    for (int i = 0; i < 3; i++) {
        Square temp_square(base_square);

        std::cout << "skopiowano: " << std::endl << "  ";
        temp_square.print();

        temp_square.scale(scales[i]);

        std::cout << "  po scale(" << scales[i] << "): " << std::endl << "    ";
        temp_square.print();
    }
    */

  return 0;
}
