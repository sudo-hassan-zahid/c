## 🔢 calculator/

A **graphical calculator** built using [raygui](https://github.com/raysan5/raygui) for the UI. Comes with history support, dynamic input handling, and configurable builds for Windows.

**Highlights:**
- 🧮 Custom-built GUI with raygui
- 🧱 Uses [Premake5](https://premake.github.io/) for build generation
- 🖥️ Supports **MinGW** and **Visual Studio 2022**

📁 Structure:
- `src/` – All logic (dynamic arrays, input handling, main UIs)
- `include/` – Custom headers
- `resources/` – Image assets
- `build/` – Premake binaries & scripts
- `.vscode/` – Tasks & launch configs

---

## 🌌 solar-system/

A minimal **C graphics demo** simulating a solar system layout with basic orbiting logic.

**Features:**
- 🌍 Planets orbit a central body
- 🛠️ Same build system as `calculator/` (Premake + raygui)
- 🎯 Cross-platform ready (Windows, Linux, macOS with tweaks)

---

## 📚 dsa/

Foundational **data structures and algorithms** implemented from scratch in C. Great for practicing core CS skills.

✅ Included:
- Singly & doubly linked lists
- Stacks, queues, dynamic arrays
- Circular lists, atomic pointers
- Basic threading examples

---

## 🌐 web-server/

A simple, lightweight **web server** written in C that can serve both static and minimal dynamic content.

**Contents:**
- `client.c`, `server.c`, `tcp.c` – Socket programming
- `*.html`, `*.php`, `*.css` – Static & styled web content
- `webserver.c` – Basic multi-request web server

> 📡 A great intro to sockets, concurrency, and low-level HTTP handling in C.

---

## 🛠️ Requirements

Most projects require:
- A C compiler (GCC / Clang / MSVC)
- [raylib](https://www.raylib.com/) + [raygui](https://github.com/raysan5/raygui) for graphical projects
- [Premake5](https://premake.github.io/) for project generation (included)

---

## 🚀 How to Run

1. **Clone the repo**  
   ```bash
   git clone https://github.com/yourusername/your-repo-name.git
