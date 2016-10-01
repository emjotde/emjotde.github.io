#include <iostream>
#include <string>

class Animal {
  public:
    Animal() { 
      std::cout << "tworze obiekt klasy Animal" << std::endl;
      age = 0;
    }
    int getAge() {
      return age;
    }
    //void sound() {  // zadanie 05.01
    //  std::cout << "zwierzeta wydaja rozne glosy..." << std::endl;
    //}

  protected:
    int age;
};

/*
class Pet {
  public:
    Pet() {
      std::cout << "tworze obiekt klasy Pet" << std::endl;
      name = "";
    }
    std::string getName() {
      return name;
    }

  protected:
    std::string name;
};
*/

class Dog : public Animal {
  public:
    Dog() { }
};

int main() {
  Dog dog;

  // zadanie 04.03
  // std::cout << "wiek lwa to " << lion.getAge() << " lat" << std::endl;
  // std::cout << "wiek psa to " << dog.getAge() << " lat" << std::endl;
  
  // zadanie 04.05
  //  std::cout << "wiek psa to " << dog.getAge() << " psich lat i "
  //    << dog.getHumanAge() << " ludzkich" << std::endl;

  // zadanie 05.02
  // Animal *animals[3];
  
  return 0;
}
