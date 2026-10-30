
# 🎮  KBC in C (Kaun Banega Crorepati – CLI Game)

A simple command-line implementation of the popular quiz game **Kaun Banega Crorepati (KBC)** built using the C programming language. This project simulates the core gameplay experience including multiple-choice questions, lifelines, and progressive prize levels.

---

## 📌  What is this project?

**KBC in C** is a console-based quiz game inspired by the Indian TV show *Kaun Banega Crorepati*. The program presents users with a series of questions of increasing difficulty, each with four options. The player must select the correct answer to progress and win higher prize amounts.

### Key Features
- 🧠 Multiple-choice quiz system  
- 💰 Progressive prize ladder  
- 🎯 Increasing difficulty levels  
- ⏳ Interactive command-line interface  
- 🎮 Game-over and winning conditions  

---

## ⚙️ How it works

The program is written in **C** and runs in a terminal/command prompt environment.

### Core Logic
1. The game starts by welcoming the user.
2. Questions are displayed one by one.
3. Each question includes:
   - Question text  
   - Four options (A, B, C, D)  
4. The user inputs their answer.
5. The program:
   - Validates the input  
   - Checks correctness  
   - Updates score/prize  
6. The game continues until:
   - The user answers incorrectly ❌  
   - OR completes all questions 🎉  

### Typical Flow
```

Start Game → Show Question → Get Input → Check Answer →
├── Correct → Next Question
└── Wrong → Game Over

````

---

## 🛠️ How to run

### Prerequisites
- GCC or any C compiler installed

### Steps

1. Clone the repository:
```bash
git clone https://github.com/Harshit-007-18/kbc-in-c.git
cd kbc-in-c
````

2. Compile the program:

```bash
gcc kbcgame.c -o kbcgame
```

3. Run the executable:

```bash
./kbcgame
```

---

## 📂 Project Structure (typical)

```
kbc-in-c/
│── kbcgame.c          # Main game logic
│── questions.h     # Question bank (if modularized)
│── README.md       # Documentation
```

---

## 🎯 Why this project?

This project is useful for:

### 👨‍🎓 Learning Purposes

* Understanding **C programming fundamentals**
* Practicing:

  * Conditional statements (`if-else`, `switch`)
  * Loops
  * Functions
  * Arrays / Structures

### 💡 Concept Building

* Game logic design
* Input/output handling
* Basic state management

### 🧑‍💻 Beginner-Friendly Project

Projects like this are commonly used to strengthen core programming concepts in C.

---

## 🚀 Possible Improvements

If you want to extend the project:

* Add **lifelines** (50-50, audience poll, etc.)
* Store questions in a **file or database**
* Add **score saving system**
* Improve UI using colors (ANSI escape codes)
* Convert to a **GUI version**
* Add **timer-based questions**

---

## 🤝 Contributing

Contributions are welcome!

1. Fork the repo
2. Create a new branch
3. Make your changes
4. Submit a pull request

---

## 📜 License

This project is open-source and available under the MIT License.

---

## 🙌 Acknowledgment

Inspired by the iconic quiz show *Kaun Banega Crorepati*, a game that tests knowledge and decision-making skills.

```
```
