# 🎲 Number Guessing Game

## 📌 Project Overview  

The **Number Guessing Game** is a console-based interactive game built using **C++**. The objective of the game is simple:  
Guess a randomly generated number between **1 and 100** with hints provided after each incorrect guess!  

✅ **Difficulty Levels** – Easy, Medium, and Hard modes with different attempt limits.  
✅ **Hint System** – Provides feedback on whether the secret number is higher or lower.  
✅ **Score Tracking** – Keeps track of wins and losses across multiple rounds.  
✅ **Replay Option** – Play multiple rounds without restarting the program.  

---

## 🖥️ How the Game Works

1. The player selects a **difficulty level**:
   - **Easy:** 7 chances  
   - **Medium:** 5 chances  
   - **Hard:** 3 chances  

2. The program generates a **random number** between 1 and 100.  
3. The player **enters guesses**, and the system provides hints:
   - If the guess is too **high**, the program suggests guessing **lower**.
   - If the guess is too **low**, the program suggests guessing **higher**.  
4. The player wins if they guess the number correctly within the allowed attempts.
5. If the player **fails**, the secret number is revealed, and they lose that round.
6. The game **tracks wins & losses** and asks if the player wants to play again.

---

## 🛠️ Installation & Setup

### Prerequisites  
- C++ Compiler (GCC, Clang, MSVC, etc.)  
- A terminal or command prompt  

### Steps to Run  
1. **Clone the Repository**  
   ```bash
   git clone https://github.com/yourusername/Number-Guessing-Game.git
