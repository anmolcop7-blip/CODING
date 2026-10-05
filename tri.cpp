#include <iostream>
using namespace std;
class Animal
{
public:
void sound ()
{
cout << "animal makes a sound " << endl;
}
};
class Cat: public Animal{
public: 
void sound()
{
cout << "cat meows" << endl;
}
};
class Dog : public Animal {
public:
void sound () 
{
cout << " dog barks " << endl;
} 
};
class Cow : public Animal {
public:
void sound () 
{
cout << "cow moos" << endl;
}  
};
int main ()
{
Dog d;
d.sound();

Cat c;
c.sound();

Cow cow;
cow.sound();
return 0;
}


