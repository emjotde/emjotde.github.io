#include <iostream>
#include <cmath>


struct Point {
    float x;
    float y; 
};

void init_point(Point* p);
void init_point(Point*, float, float);
void print_point(Point);
float dist(Point, Point);


struct Path {
    Point* points;
    int count;
    int max;
};

void init_path(Path*, int);
void del_path(Path*);
int add_point(Path*, float, float);
void print_path(Path p);
float path_length(Path*);


int main() {
    int n;
    std::cin >> n;

    Path path;
    init_path(&path, n);

    for (int i = 0; i < n; i++) {
        float x, y;
        std::cin >> x >> y;
        add_point(&path, x, y);
    }

    print_path(path);
    std::cout << path_length(&path) << std::endl;

    del_path(&path);
    return 0;
}

// funkcje dla Point

void init_point(Point* p, float x, float y) {
    p->x = x;
    p->y = y;
}
void init_point(Point* p) {
    init_point(p, 0.0, 0.0);
}
void print_point(Point p) {
    std::cout << "(" << p.x << ", " << p.y << ")";
}
float dist(Point p1, Point p2) {
    return sqrt( (p2.x - p1.x)*(p2.x - p1.x) + (p2.y - p1.y)*(p2.y - p1.y) );
}

// funkcje dla Path

void init_path(Path* p, int m) {
    p->points = new Point[m];
    p->count = 0;
    p->max = m;
}
void del_path(Path* p) {
    delete[] p->points;
}
int add_point(Path* p, float x, float y) {
    if (p->count < p->max) {
        init_point(&p->points[p->count++], x, y);
        return 1;
    }
    return 0;
}
void print_path(Path p) {
    for (int i = 0; i < p.count; i++) {
        print_point(p.points[i]);
    }
    std::cout << " ";
}
float path_length(Path* p) {
    float len = 0.0f;
    for (int i = 1; i < p->count; i++)
        len += dist(p->points[i-1], p->points[i]);
    return len;
}
