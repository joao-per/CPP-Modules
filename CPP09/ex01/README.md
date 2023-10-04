# Exercise: Reverse Polish Notation Calculator 🧮
## Objective of the Exercise 🎯
Create an RPN calculator capable of processing mathematical expressions provided in Reverse Polish Notation, adhering to specific constraints, and ensuring accurate calculations and efficient error handling.

## Key Components 🧩
### 1. RPN Class:
Purpose: Manages calculations related to RPN expressions.
#### Key Methods:
- calculateRPN(): Processes tokens and performs calculations to derive the result.
- performOperation(): Conducts arithmetic operations based on operands and operators.

### 2. Data Structures:
std::stack<int> operands: Stores operands in LIFO manner to facilitate accurate RPN calculations.

## How It Works 🛠️
### 1. Expression Tokenization:
The input RPN expression is tokenized into individual numbers and operators.
### 2. Token Processing:
Each token is evaluated, and appropriate calculations or stack operations are performed accordingly.
### 3. Error Handling:
Possible errors like insufficient operands, invalid tokens, or division by zero are gracefully managed.
### 4. Result Display:
The final result, derived post all calculations, is displayed.


## In Simple Terms 🎓
Imagine having a stack of trays. When you receive numbers, you place trays (operands) on the stack. When you receive an operator, you take the top two trays (pop), perform a calculation, and place a new tray (push the result) back on the stack. The final tray left represents the result of all preceding actions, illustrating the functionality of the developed RPN calculator.