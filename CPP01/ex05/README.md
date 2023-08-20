# Exercise 05: Complain like Harl 📢
## Objective of the Exercise 🎯
Anyone who has ever worked in a service industry knows a Harl. Harl is that particular customer who has something to say about everything. Whether it's a slight inconvenience or a major outrage, Harl is ready with a comment. This exercise aims to recreate Harl in code. And not just a basic version - we want to simulate his extensive variety of complaints at different severity levels.

## Understanding the Components 🧩
### 🗣️ 1. Harl's Comments:
Harl has four types of comments, each representing a different level of severity:

DEBUG: Light-hearted remarks or simple observations.
INFO: More detailed comments, generally expressing some form of dissatisfaction.
WARNING: Harl is unhappy and is subtly letting you know.
ERROR: Harl is livid and demands immediate attention.
### 🧠 2. The Harl Class:
It's the essence of Harl's character. This class captures the various kinds of complaints Harl might make:

Four private methods, each corresponding to a type of comment.
One public method, complain, that lets Harl voice his feelings based on a given severity level.

## How It Works 🛠️
### 💭 1. Input the Severity:
When you invoke Harl's complain method, you provide a level. This level decides the type of comment Harl is going to make.

### 🧭 2. Using Pointers to Member Functions:
Instead of the usual if-else chains to decide which method to call, we employ pointers to member functions. It's a clean and elegant way to map the complaint level directly to a function without multiple condition checks.

### 🎙️ 3. Harl Complains:
Once the appropriate method is chosen, Harl voices his complaint corresponding to the severity level.

## In Simple Terms 🎓
You know those dolls where you pull a string and they say something? Imagine Harl as one of those dolls. But he's a special one: the string you pull determines the mood of his response. A soft tug might get a light-hearted jest, but yank that string too hard, and Harl has a meltdown!

In our code version, the string is the severity level. Depending on which one you choose, Harl has a pre-set response ready to go! 🗣️🔄🎤🎉