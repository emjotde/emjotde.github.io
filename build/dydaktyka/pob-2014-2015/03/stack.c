#include <stdio.h>
#define MAX 100

struct Stack {
    int data[MAX];  // tablica do przechowywania elementów
    int n;          // aktualna liczba elementów w stosie
};

void init(struct Stack *s) {
    s->n = 0;
}

int pop(struct Stack *s) {
    return s->data[--s->n]; // zwracamy najnowszy element i zmniejszamy liczbę elementów
}

void push(struct Stack *s, int x) {
    s->data[s->n++] = x;    // dodajemy do tablicy nowy element na najnowszej pozycji
}

int empty(struct Stack *s) {
    return !s->n;           // sprawdzamy czy na stosie są jakieś elementy
}

int main() {
  struct Stack s; // deklaracja zmiennej
  init(&s);       // wywołanie inicjalizacji
              
  push(&s, 4);    // dodajemy jakieś dane
  push(&s, 1);
  push(&s, 13);
      
  // s.n = 1;
  // s.n = -1;
      
  while (!empty(&s)) {        // dopóki jest jakiś element na stosie
    printf("%d\n", pop(&s));  // wypisujemy go
  }

  return 0;
}
