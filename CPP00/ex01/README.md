# Exercise 01: Contact 📞
## Objective of the Exercise 🎯
The main aim of the exercise is to create a program that can store and manage a list of contacts. The program should be able to:
- Add a new contact
- Search for a contact
- Display all contacts
- Exit the program

## Understanding the Components 🧩
### 1. The main Function:
This is the entry point of the program. It displays a menu of options to the user and calls the appropriate function based on the user's choice.

### 2. The Contact Class (Defined in Contact.hpp and implemented in Contact.cpp):
This is the blueprint for creating individual Contact objects. The class has:
- Private string members for the contact's first name, last name, nickname, Phone number, and Darkest secret.
- Public member functions to set and get the contact's details.

### 3. The Phonebook Class (Defined in Phonebook.hpp and implemented in Phonebook.cpp):
This class is responsible for managing the contacts. It has:
- A private array of Contact objects to store the contacts.
- A private integer member to keep track of the number of contacts in the phonebook.
- Public member functions to add, search for, and display contacts.

## How It Works 🛠️
### 1. The main Function:
When the program is run, the main function does the following:
- Displays a menu of options to the user.
- Takes in the user's choice.
- Calls the appropriate function based on the user's choice.
- Repeats the above steps until the user chooses to exit the program.

## In Simple Terms 🎓
Imagine you're a receptionist at a hotel. You have a phonebook that contains the names and phone numbers of all the guests staying at the hotel. You can add new guests to the phonebook, search for guests, and display all the guests' details. And when you're done, you can exit the phonebook.
