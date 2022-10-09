#include <iostream>
#include "Animal.h"
#include "Elephant.h"
#include "Pinguin.h"
#include "Parrot.h"
#include "Dog.h"
using namespace std;


int main() {
	Elephant elephant("elephant", "travoyadnoye", "hot and tropical climates", "big", "thick skin");
	elephant.PrintAnimal();

	Pinguin pinguin("pinguin", "mlekopitayshie", "cold edges", "average", "warm wool");
	pinguin.PrintAnimal();

	Parrot parrot("parrot", "travoyadnoe", "warmer climes", "small", "can fly");
	parrot.PrintAnimal();

	Dog dog("dog", "mlekopitayshie", "cutie", "average", "very friendly");
	dog.PrintAnimal();
}