# Exercise Bonus: Filtering Harl's Rants 🎚️
## Objective of the Exercise 🎯
Harl's a talker. And sometimes, you just don't want to listen to all of it. So the goal of this bonus exercise is to develop a filtering mechanism. Depending on the severity level you're interested in, Harl will only voice complaints of that level or higher. This allows you to tone down or amplify Harl's rants as desired.

## Understanding the Components 🧩
### 🎚️ 1. Filtering Mechanism:
We aim to provide a user-specified severity level. Harl's complaints will then only cover that level and the ones deemed more severe.

### 🧠 2. The Extended Harl Class:
We're expanding on our previous Harl class. The changes include:

An additional method that utilizes the switch statement to determine which complaint levels to voice.

## How It Works 🛠️
### 📥 1. Input the Severity:
Run the program with the desired severity level. Harl will filter out any complaints below that level.

### 🧭 2. Using the Switch Statement:
The switch statement is ideal here because it allows for clear, cascading checks based on the complaint level. Once we hit a match, all cases following it (representing higher severity levels) will execute in sequence, thanks to the absence of break statements (a technique called "fall-through").

### 🎙️ 3. Harl Complains (But Filtered!):
With the appropriate severity level determined, Harl voices his complaints for that and all higher levels.

## In Simple Terms 🎓
Imagine you're tuning a radio. As you turn the dial, you filter out the lower-frequency stations and only pick up the higher ones. Similarly, with our filtering mechanism, we're adjusting how much of Harl's chatter we're willing to tolerate. Dial it down for the mild complaints or crank it up if you're in the mood for some drama!