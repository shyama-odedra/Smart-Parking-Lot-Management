# Smart Parking Lot Management System

Live Application: [smartparkinglot.netlify.app](https://smartparkinglot.netlify.app/)

## Project Overview

The Smart Parking Lot Management System is a real-time vehicle allocation and inventory tracking solution built on Data Structures & Algorithms (DSA) principles. It utilizes a **singly linked list** (`Car* head`) to dynamically manage vehicle parking and removal without fixed array pre-allocation or memory overhead.

This repository features two implementations of the same underlying data structure logic:

| Implementation | Language | Interface | Execution Model |
|---|---|---|---|
| `parking_lot.cpp` | C++ (C++11+) | Command-Line Interface (CLI) | Standalone Binary |
| `index.html` | JavaScript (ES6+) | Web Visualizer & Dashboard | Client-Side SPA |

The web interface is a direct, 1-to-1 port of the C++ logic. It mirrors the exact pointer transitions, linked list traversals, capacity validation, and terminal console event messages in real time.

---

## Technical Specifications & Data Structures

- **Data Structure**: Singly Linked List (`struct Car { string number; Car* next; }`)
- **Memory Allocation**: Dynamic heap node creation (`new Car`) on vehicle arrival; pointer reallocation and memory deallocation (`delete`) on vehicle exit.
- **Complexity**:
  - `parkCar`: **O(1)** time complexity (insertion at list head)
  - `removeCar`: **O(N)** time complexity (linear search and pointer reconnection)
  - `displayCars`: **O(N)** time complexity (full list traversal)
- **Capacity Control**: Enforces fixed maximum capacity thresholds with automated overflow detection.

---

## C++ Compilation & Execution

To compile and execute the C++ command-line application locally:

```bash
# Compile using g++ compiler
g++ -O2 parking_lot.cpp -o parking_lot

# Run executable (Linux/macOS)
./parking_lot

# Run executable (Windows PowerShell)
.\parking_lot.exe
```

### Sample Terminal Output

```text
Car GJ06AA1111 parked. Slots left: 2
Car GJ06BB2222 parked. Slots left: 1
Car GJ06CC3333 parked. Slots left: 0
Cars currently parked: GJ06CC3333 GJ06BB2222 GJ06AA1111 

Car GJ06BB2222 exited. Slots left: 1
Cars currently parked: GJ06CC3333 GJ06AA1111 

Car GJ06DD4444 parked. Slots left: 0
Parking Full!
```

---

## Web Dashboard & Visualizer

The web implementation (`index.html`) is fully self-contained with no build steps or external library dependencies.

Key Features:
- **Real-Time Parking Bay Grid**: Visual inventory rendering vacant and occupied bays.
- **Singly Linked List Memory Visualizer**: Graphical memory pointer representation (`head -> [Node] -> NULL`).
- **Dashboard Metrics**: Real-time stats for Total Capacity, Occupied Bays, Available Bays, and Occupancy Rate.
- **System Event Console**: Monospaced event logging matching C++ output.

---

## Hosting & Deployment Setup

### Netlify Deployment
1. Connect your repository in Netlify.
2. Set Build Command to empty (static HTML).
3. Set Publish Directory to `/` (root directory).

### GitHub Pages Deployment
1. Navigate to Repository Settings -> **Pages**.
2. Select Source: **Deploy from a branch**.
3. Choose `main` branch and `/ (root)` directory.

---

## Portfolio Summary

> Engineered a Smart Parking Lot System in C++ utilizing a custom singly linked list for dynamic memory allocation and capacity constraints. Developed an interactive live web visualizer in JavaScript demonstrating real-time pointer manipulations and algorithmic state transitions.
