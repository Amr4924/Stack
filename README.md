<div align="center">

<!-- Animated Header -->
<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=700&size=28&duration=3000&pause=1000&color=00D9FF&center=true&vCenter=true&width=600&lines=Stack+Data+Structure;Built+from+Scratch+in+C%2B%2B;LIFO+%E2%80%93+Last+In+First+Out!" alt="Typing SVG" />

<br/>

<!-- Animated Badges -->
<img src="https://img.shields.io/badge/C%2B%2B-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" />
<img src="https://img.shields.io/badge/Data_Structures-FF6B6B?style=for-the-badge&logo=databricks&logoColor=white" />
<img src="https://img.shields.io/badge/Memory_Management-4CAF50?style=for-the-badge&logo=buffer&logoColor=white" />
<img src="https://img.shields.io/badge/Templates-9B59B6?style=for-the-badge&logo=cplusplus&logoColor=white" />

<br/><br/>

<!-- Snake Animation -->
<picture>
  <source media="(prefers-color-scheme: dark)" srcset="https://raw.githubusercontent.com/platane/platane/output/github-contribution-grid-snake-dark.svg">
  <source media="(prefers-color-scheme: light)" srcset="https://raw.githubusercontent.com/platane/platane/output/github-contribution-grid-snake.svg">
  <img alt="github contribution grid snake animation" src="https://raw.githubusercontent.com/platane/platane/output/github-contribution-grid-snake.svg">
</picture>

</div>

---

## 📖 About

A **generic Stack** data structure built completely from scratch in C++.  
This project was created to deeply understand how **Stack (LIFO)** and **memory management** work behind the scenes, without relying on STL containers like `std::stack`.

---

## ⚡ How It Works

```
┌─────────────────────────────────────────────────────────────────┐
│                    🔄 STACK LIFECYCLE (LIFO)                     │
└─────────────────────────────────────────────────────────────────┘

   ┌──────────────────────────────────────────────────────────┐
   │  1️⃣  INITIALIZE (Empty Stack)                            │
   │                                                          │
   │         ┌─────┐                                          │
   │         │     │  ← Top                                   │
   │         ├─────┤                                          │
   │         │     │                                          │
   │         ├─────┤                                          │
   │         │     │                                          │
   │         └─────┘                                          │
   │         Size: 0    Capacity: 64                          │
   └──────────────────────────────────────────────────────────┘
                           ⬇️
   ┌──────────────────────────────────────────────────────────┐
   │  2️⃣  PUSH ELEMENTS (Added to Top)                        │
   │                                                          │
   │         ┌─────┐                                          │
   │         │  8  │  ← Top (Last In)                         │
   │         ├─────┤                                          │
   │         │  3  │                                          │
   │         ├─────┤                                          │
   │         │  5  │  ← First In                              │
   │         └─────┘                                          │
   │         Size: 3    Capacity: 64                          │
   └──────────────────────────────────────────────────────────┘
                           ⬇️
   ┌──────────────────────────────────────────────────────────┐
   │  3️⃣  POP (Remove from Top - LIFO)                        │
   │                                                          │
   │         ┌─────┐                                          │
   │         │  3  │  ← New Top                               │
   │         ├─────┤                                          │
   │         │  5  │                                          │
   │         └─────┘                                          │
   │         Size: 2    (8 was removed - Last In, First Out)  │
   └──────────────────────────────────────────────────────────┘
                           ⬇️
   ┌──────────────────────────────────────────────────────────┐
   │  4️⃣  AUTO RESIZE (when capacity reached)                 │
   │                                                          │
   │         Capacity doubles: 64 → 128 → 256 → ...           │
   │         All elements are preserved during resize!        │
   └──────────────────────────────────────────────────────────┘
```

---

## ✨ Features

<div align="center">

| Feature | Description |
|:-------:|:------------|
| 🔹 | **Dynamic memory allocation** using `new[]` / `delete[]` |
| 🔹 | **Generic design** using Templates (supports `int`, `long long`, `string`, etc.) |
| 🔹 | **Automatic resizing** with capacity growth strategy (×2) |
| 🔹 | **`push()`** – Add element to top |
| 🔹 | **`pop()`** – Remove top element |
| 🔹 | **`Top()`** – Access top element |
| 🔹 | **`Size()`** – Get current number of elements |
| 🔹 | **`Empty()`** – Check if stack is empty |
| 🔹 | **`clear()`** – Remove all elements |
| 🔹 | **Bounds checking** with exception handling |
| 🔹 | **Default capacity** of 64 elements |
| ⛔ | **No STL containers used** |

</div>

---

## 🧩 Usage Example

```cpp
#include "clsStack.h"
#include <iostream>

int main() {
    // 🔢 Stack with integers
    clsStack<int> numbers;
    
    // Push elements onto the stack
    numbers.push(10);
    numbers.push(20);
    numbers.push(30);
    
    std::cout << "Top: " << numbers.Top() << std::endl;   // 30
    std::cout << "Size: " << numbers.Size() << std::endl; // 3
    
    // Pop element from top
    numbers.pop();
    std::cout << "After pop, Top: " << numbers.Top() << std::endl; // 20
    
    // Check if empty
    if (!numbers.Empty()) {
        std::cout << "Stack is not empty!" << std::endl;
    }
    
    // 📝 Stack with strings
    clsStack<std::string> names;
    names.push("Alice");
    names.push("Bob");
    names.push("Charlie");
    
    std::cout << "Top name: " << names.Top() << std::endl; // Charlie
    
    // Clear all elements
    names.clear();
    std::cout << "After clear, Empty: " << names.Empty() << std::endl; // 1 (true)
    
    return 0;
}
```

---

## 🔧 API Reference

```
╔══════════════════════════════════════════════════════════════════╗
║                         📚 CLASS METHODS                          ║
╠══════════════════════════════════════════════════════════════════╣
║  Constructor      │  clsStack<T>()                               ║
║  Destructor       │  ~clsStack()                                 ║
╠══════════════════════════════════════════════════════════════════╣
║  push(T)          │  Add element to top           → void         ║
║  pop()            │  Remove top element           → bool         ║
║  Top()            │  Get top element              → T&           ║
╠══════════════════════════════════════════════════════════════════╣
║  Size()           │  Current number of elements   → ll           ║
║  Empty()          │  Check if empty               → bool         ║
║  clear()          │  Remove all elements          → void         ║
╚══════════════════════════════════════════════════════════════════╝
```

---

## 🧠 What I Learned

<div align="center">

```
    ╭────────────────────────────────────────────────────────────╮
    │  💡 Understanding LIFO (Last In, First Out) principle      │
    │  💡 Core memory management with new[] / delete[]           │
    │  💡 The real difference between size & capacity            │
    │  💡 Why templates are essential for reusability            │
    │  💡 How dynamic resizing strategies affect performance     │
    │  💡 Stack vs Array vs Queue behavior differences           │
    │  💡 Why STL containers like std::stack exist               │
    ╰────────────────────────────────────────────────────────────╯
```

</div>

---

## 🛠️ Tech Stack

<div align="center">

<img src="https://skillicons.dev/icons?i=cpp,visualstudio,git" />

</div>

| Technology | Purpose |
|:----------:|:--------|
| **C++** | Core implementation language |
| **Templates** | Generic programming |
| **Manual Memory** | `new[]` / `delete[]` management |

---

## 🌱 Roadmap

- [x] ✅ Basic push/pop operations
- [x] ✅ Top element access
- [x] ✅ Size and Empty checks
- [x] ✅ Clear functionality
- [x] ✅ Automatic capacity resize (×2)
- [x] ✅ Bounds checking with exceptions
- [ ] 🚧 Copy constructor & assignment operator (Rule of 3 / 5)
- [ ] 🚧 Move semantics
- [ ] 🚧 Peek multiple elements
- [ ] 🚧 Reverse stack operation
- [ ] 🚧 Stack comparison operators

---

## 📁 Project Structure

```
📦 Stack
 ┣ 📜 clsStack.h     # Main template class
 ┣ 📜 slack.cpp      # Test/Demo file
 ┗ 📜 README.md      # Documentation
```

---

<div align="center">

## 💭 Philosophy

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=500&size=16&duration=4000&pause=1000&color=FFD700&center=true&vCenter=true&width=700&lines=Building+core+data+structures+manually+isn't+about+replacing+the+STL;It's+about+understanding+the+fundamentals+that+everything+else+is+built+on" alt="Philosophy" />

---

### ⭐ Star this repo if you found it helpful!

<img src="https://readme-typing-svg.demolab.com?font=Fira+Code&weight=600&size=20&duration=2000&pause=500&color=00FF00&center=true&vCenter=true&width=500&lines=More+implementations+coming+soon...;Stay+tuned+for+updates!" alt="Coming Soon" />

---

## 🤝 Connect with Me

<a href="https://www.linkedin.com/in/sa3dwy/">
  <img src="https://img.shields.io/badge/LinkedIn-0077B5?style=for-the-badge&logo=linkedin&logoColor=white" alt="LinkedIn" />
</a>

---

<img src="https://capsule-render.vercel.app/api?type=waving&color=gradient&customColorList=6,11,20&height=100&section=footer" width="100%" />

</div>
