# Exercise 00 : Zombie
## Objective of the Exercise 🎯
The exercise wanted us to breathe life into some spooky characters—Zombies! These Zombies can introduce themselves, and we also have ways to create and manage them. We ensure that when we're done with them, they go back to their eternal rest (read: they're properly deleted).

## Understanding the Components 🧩
### 🧟 1. Zombie Class (Defined in Zombie.hpp and implemented in Zombie.cpp):

This class is like our Zombie "blueprint". Every time we want to create a new Zombie, we refer to this. The class has:

A private string attribute _name for the Zombie's name.
A constructor to set the Zombie's name when it comes to life.
A destructor that tells us when the Zombie is being laid to rest.
An announce() method that lets the Zombie tell the world about its presence.

### 🔧 2. Utility Functions:

We have two tools in our Zombie toolkit:

newZombie: This lets us create a single new Zombie and gives it a name. The new Zombie is then free to roam around outside the function.

randomChump: It's like an instant Zombie producer! It creates a Zombie, names it, and the Zombie immediately announces itself. But unlike newZombie, this Zombie's life is short-lived and ends within the function.

## How It Works 🛠️
### 🧠 1. Birth of a Zombie:

With newZombie, we allocate memory for one Zombie on the heap. It's like giving it its own space to exist. The Zombie's name is set, and then we return this newly created Zombie.

With randomChump, the Zombie comes to life, announces itself, and is immediately sent back to the underworld (it's destroyed right within the function).

### 🗣 2. Zombies Announcing Themselves:

When you call a Zombie's announce() method, it shouts out its own version of a hello: "<name>: BraiiiiiiinnnzzzZ..."

### 🗑 3. Cleaning Up (Ensuring there are no Zombie outbreaks):

After having their fun, we need to ensure our Zombies don't overstay their welcome. Using the delete keyword, we can safely lay them to rest.

When a Zombie is deleted, it has one last say. The destructor is called, and it prints a message, letting us know which Zombie has been put down.

## In Simple Terms 🎓
Imagine you're a mad scientist 🥼⚡, and you've discovered a way to make Zombies!

With your newZombie tool, you can create a single Zombie 🧟. It's like giving birth to one and letting it wander around.

However, with randomChump, it's more like a pop-up Zombie. It appears, shouts its name, and then poof! It's gone again.

When you're done playing around, you don't want Zombies everywhere, so you use your special tool (the delete keyword) to ensure they're gone for good. And as each one disappears, it whispers one last message 🍃.

There you have it—Zombies made, announced, and managed responsibly! 🎉🧟🔚