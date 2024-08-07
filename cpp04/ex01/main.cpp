#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

/* int main()
{
    Animal *animals[10];

    for (int i = 0; i < 5; i++)
        animals[i] = new Dog();
    for (int i = 5; i < 10; i++)
        animals[i] = new Cat();

    for (int i = 0; i < 10; i++)
        delete (animals[i]);
} */

int main()
{
    Dog originalDog;
    Cat originalCat;

    Dog copiedDog(originalDog);
    Cat copiedCat(originalCat);

    originalDog.makeSound();
    originalCat.makeSound();

    std::cout << "After modifying original objects:" << std::endl;
    copiedDog.makeSound();
    copiedCat.makeSound();
    return 0;
}