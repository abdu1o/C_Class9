#include <iostream>
#include <string>
using namespace std;

class Animal 
{
protected:

    string name;
    int age;
    string breed;

public:

    Animal(const string& name, int age, const string& breed) : name(name), age(age), breed(breed) {}

    virtual void MakeSound() = 0;
};

class Dog : public Animal 
{
public:

    Dog(const string& name, int age, const string& breed) : Animal(name, age, breed) {}

    void MakeSound() override
    {
        cout << name << " Gaw!" << endl;
    }
};

class Cat : public Animal 
{
public:

    Cat(const string& name, int age, const string& breed) : Animal(name, age, breed) {}

    void MakeSound() override 
    {
        cout << name << " Meow!" << endl;
    }
};

class Parrot : public Animal 
{
public:

    Parrot(const std::string& n, int a, const std::string& b) : Animal(n, a, b) {}

    void MakeSound() override
    {
        cout << name << " Chirik!" << std::endl;
    }
};

int main() 
{
    Animal* dog = new Dog("Ross", 12, "Mops");
    Animal* cat = new Cat("Monika", 23, "Stray");
    Animal* parrot = new Parrot("Joey", 12321, "African");

    dog->MakeSound();
    cat->MakeSound();
    parrot->MakeSound();

    delete dog;
    delete cat;
    delete parrot;
}
