#include <iostream>

void swap(float& a, float& b) {
    float temp(a);
    a = b;
    b = temp;
}

void bubble_sort(float array[], int size) {
  bool next = true;
  
  while (next) {
    next = false;

    for (int i = 0; i < size - 1 ; i++) {
      if (*(array + i) > *(array + i + 1)) {
        swap(*(array + i), *(array + i + 1));
        next = true;
      }
    }
  
  }
}

class Stack {
public:
    Stack(float tab[], int size) : elements(new float[MAX_SIZE]), size(size) {
        for (int i = 0; i < size; i++) 
            elements[i] = tab[i];
    }

    ~Stack() { delete[] elements; }

    bool full() { return size >= MAX_SIZE; }
    void push(float e) { if (!full()) elements[size++] = e; }
    float pop() { return elements[--size]; }
    bool empty() { return size == 0; }

    static const int MAX_SIZE = 100;

private:
    float *elements;
    int size;
};


int main()
{
    // zadanie 01
    float floats[] = { 1.0, 4.7, 2.1, 0.5, 3.3 };
    std::string strings[] = { "ala", "ma", "kota", "i", "psa" };

    std::cout << "before sort = ";
    //print_pretty_array<float>(floats, 5);

    // zadanie 02
    bubble_sort(floats, 5);

    std::cout << "after sort = ";
    //print_pretty_array<float>(floats, 5);
   
    Stack stack(floats, 5);

    return 0;
}
