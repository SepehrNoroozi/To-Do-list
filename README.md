# 📝 To-Do List CLI Application (C++)

This is a **command-line To-Do List app written in C++** that allows users to manage their tasks interactively. It supports adding, viewing, marking as done, deleting tasks, and saving/loading tasks from a text file.

---

## ✅ Features

- 📌 Add new tasks
- 👀 View current tasks (with status: Done / Pending)
- ✅ Mark tasks as done
- ❌ Delete tasks
- 💾 Persistent storage via `tasks.txt`
- 💡 Simple and beginner-friendly C++ code

---

## 🛠 Requirements

- C++17 or higher
- A C++ compiler (G++, Clang++, MSVC, etc.)

---

## 🚀 How to Build and Run

### 🔧 Compile:

g++ -std=c++17 -o todo main.cpp

### ▶️ Run:

./todo

---

### 💾 Saving and Loading

All tasks are saved in a text file called tasks.txt located in the same directory as the program.

When you run the program again, it automatically loads the saved tasks.

---

### 🧩 Example Interaction
==== To-Do list ====
1. Add Task
2. View Tasks
3. Mark Task as Done
4. Delete Task
5. Save and Exit

Enter your choice: 1

Enter task description: Finish README

Task added: Finish README

---

### 📁 File Format
Tasks are saved in tasks.txt like this:

0|Buy groceries

1|Finish homework

Where:

0 = Pending

1 = Done

---

### 📌 Author
Created by Sepehr Noroozi.

---

### 📃 License
This project is open-source and free to use.
