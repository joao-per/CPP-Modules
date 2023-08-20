# Exercise 03: Unnecessary Violence 🗡️
## Objective of the Exercise 🎯
Ever wanted to be a medieval warlord with warriors armed to the teeth? Well, this exercise may not get us to the throne, but it gives a peek into the world of weaponry. We're creating humans—HumanA and HumanB—each with their unique way of wielding a weapon.

## Understanding the Components 🧩
### 1. Weapon Class (Defined in Weapon.hpp and implemented in Weapon.cpp): 🗡️
This is our armory. It's where the weapons come to life. Each weapon has:

A private string attribute type which defines the type of weapon (like a "sword" or "club").
Methods getType() and setType() to retrieve and modify the weapon's type, respectively.

### 2. HumanA and HumanB Classes: 👤
These are our warriors. They've got:

A name to identify themselves.
A weapon to show their might.
A function attack(), their battle cry! It displays how they attack with their weapon.

Here's the catch:
HumanA always has a weapon; it's like a knight in shining armor—always prepared. This weapon is assigned through reference.
HumanB is a bit laid-back. He may or may not have a weapon, and it's assigned through a pointer.

## How It Works 🛠️
### 1. Arming our Humans: 🛡️
For HumanA: At creation, we immediately arm him. The weapon becomes an extension of himself.

For HumanB: He's choosy. We can arm him anytime after creation, and he holds onto his weapon through a pointer.

### 2. The Battle Cry: 📣
When the attack() function is invoked, each human showcases their fierceness by stating their name and the weapon they wield.

### 3. Pointer vs. Reference: 💡
HumanA using a reference ensures that he's always armed—it's part of his identity.
HumanB using a pointer means he's more flexible. He can be armed or unarmed, representing a more dynamic scenario.

## In Simple Terms 🎓
Imagine two warriors entering a battleground.

HumanA is like a seasoned knight, always with his trusty sword by his side. When he yells his battle cry, you know the weapon he's using because he's never without it.

On the other hand, HumanB is like a rogue warrior. Sometimes he has a dagger, sometimes a bow, and sometimes, he's just there for the show. He gets to choose his weapon, and when he shouts his attack, you're in for a surprise!

Thus, in a world of weapons and warriors, we see how two different humans arm themselves and declare their might. ⚔️🛡️🎉🤺🔚