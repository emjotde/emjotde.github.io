#include <iostream>

class Foo {           // Foo to nazwa klasy
  public:
    int attr;         // przykładowy atrybut

    void method() {   // przykładowa metoda
      std::cout << "attr=" << attr << std::endl;
    }
};                    // średnik jest niezbedny!

int main() {
  Foo foo;            // utworzenie obiektu klasy Foo

  foo.attr = 15;      // dostęp do atrybutu
  foo.method();       // wywołanie metody
  
  Foo *pfoo = &foo;
  pfoo->method();     // wywołanie metody

  return 0;
}
