# Exercise 01: Zombie Horde
## Objective of the Exercise
The main aim of the exercise is to create a bunch (or horde) of Zombie objects and have each one announce itself. Once they've done their part, they should be destroyed, freeing up the memory they occupied.

## Understanding the Components
### 1. Zombie Class (Defined in Zombie.hpp and implemented in Zombie.cpp):

This is the blueprint for creating individual Zombie objects. The class has:

- A private string member _name which holds the name of the Zombie.
- A public constructor and a destructor. The constructor is used to set the name when a new Zombie is created, and the destructor announces when a Zombie is destroyed.
- A public member function announce() that allows the Zombie to, well, announce itself.

### 2. zombieHorde Function:

This function is responsible for creating our horde of Zombies. It takes in the number of Zombies to create (N) and a name (name). It returns a pointer to the first Zombie in the horde.

## How It Works
### 1. Creation of the Zombie Horde:

When you call the zombieHorde function (from zombieHorde.cpp), it does the following:

Allocates memory for N Zombies in one go using the new keyword. This memory is allocated on the heap (a region of memory which allows dynamic allocation).
Initializes each Zombie in this memory with the provided name. For uniqueness, I added a number to each Zombie's name. So, if N is 5 and name is "Zombie", the names would be "Zombie1", "Zombie2", and so on.
Returns a pointer to the first Zombie.

### 2. Announcing the Zombies (from main.cpp):

Once the horde is created:

A loop runs N times, and each Zombie in the horde announces itself using the announce() method.

### 3. Cleaning Up:

After the Zombies have done their part:

The delete[] operator is used to free the memory occupied by the horde. This is crucial, as failing to free up memory can lead to memory leaks.
As each Zombie is deleted, its destructor is called, and it announces that it's being destroyed.

## In Simple Terms
Imagine you have a factory (the zombieHorde function) that makes toy zombies. You tell it how many toys you want (let's say 5) and what base name each should have ("Zombie"). The factory then produces 5 toy zombies named Zombie1, Zombie2,...,Zombie5.

Once made, each toy zombie can shout out a phrase (using the announce() method). After they've shouted out their phrase, you don't want to leave them scattered around, so you gather them up and put them away (using delete[]), making sure to note (through the destructor) each one you put away.

And that's the essence of the exercise!