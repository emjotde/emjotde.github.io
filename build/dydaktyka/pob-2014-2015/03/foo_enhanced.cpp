#include <iostream>

class Foo {
  public:
    Foo() {                 // konstruktor bezargumentowy
      std::cout << "creating new object" << std::endl;
      attr = 0;             // dostep do atrybutu zdefiniowanego w klasie
    }

    Foo(int a) {            // alternatywny konstruktor jednoargumentowy
      std::cout << "creating new object with attr=" << a << std::endl;
      attr = a;             // dostep do atrybutu zdefiniowanego w klasie
    }

    ~Foo() {                // destruktor
      std::cout << "destroying object" << std::endl;
    }

    void set_attr(int a) {  // metoda ustawiająca atrybut
      attr = a;             // dostep do atrybutu zdefiniowanego w klasie
    }

    int get_attr() {
      return attr;
    }

  private:
    int attr;               // przykladowy atrybut

};

int main() {
  Foo foo;                  // utworzenie obiektu poprzez konstruktor bezargumentowy
  std::cout << foo.get_attr() << std::endl;

  Foo bar(13);              // utworzenie obiektu przez konstruktor jednoargumentowy
  std::cout << bar.get_attr() << std::endl;

  //foo.attr = 12           // odwołanie do atrybutu w ten sposób nie jest możliwe
  foo.set_attr(12);
  std::cout << foo.get_attr() << std::endl;

  return 0;
}
