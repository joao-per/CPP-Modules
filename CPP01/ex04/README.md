# Exercise 04: Sed is for losers 📝
## Objective of the Exercise 🎯
In the vast world of programming, sometimes we need to tweak data—like replacing certain words or characters in files. This exercise is all about that. It's our very own file editor, sans the usual editing software. We're going to read a file, replace words, and then write our changes back—without even opening the file manually!

## Understanding the Components 🧩
### 1. Input Parameters: 📄
This program relies on three key pieces of data:

filename: The name of the file we're going to work on.
s1: The word or sequence of characters we want to replace.
s2: The word or sequence we want to use as a replacement.

### 2. The Replacement Mechanism: 🔍
Though the exercise forbids the use of std::string::replace, there are still many string manipulation functions available to us. The challenge is to employ them strategically to replace every occurrence of s1 with s2 in the file.

### 3. Writing Back: 🖋️
After the replacements are done, we save the newly modified content into another file named <filename>.replace.

## How It Works 🛠️
### 1. Reading the File: 📖
The program starts by reading the content of the file whose name is given as an input.

### 2. Making Replacements: 🔄
Navigating through the content, the program searches for instances of s1. Every time it finds one, it substitutes it with s2.

### 3. Saving the Changes: 💾
After processing the entire content, the program writes the modified data into a new file with the extension .replace added to the original filename.

## In Simple Terms 🎓
Imagine you've written a diary, and suddenly, you don't like how you've used the word "awesome" everywhere. Instead, you wish you'd written "amazing". This program is like a magical diary assistant. You tell it, "Hey, change 'awesome' to 'amazing'", and poof! It creates a new diary for you with all the changes made.

And the best part? You don't even have to flip through the diary pages yourself. This assistant takes care of everything—from reading to making changes, to giving you a brand-new diary! 📘🔄📗🎉