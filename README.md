# Smart Parking Lot Management

## 📌 Project Concept
Manage a parking lot with entry/exit tracking using linked lists and dynamic memory.

## ⚙️ Tech Requirements
- Linked list for active cars
- Dynamic memory allocation
- Handle overflow when full

## 🚀 How to Run
```bash
g++ src/parking.cpp -o parking
./parking
```
```bash
Car GJ06AA1111 parked. Slots left: 2
Car GJ06BB2222 parked. Slots left: 1
Car GJ06CC3333 parked. Slots left: 0
Cars currently parked: GJ06CC3333 GJ06BB2222 GJ06AA1111 
Car GJ06BB2222 exited. Slots left: 1
Cars currently parked: GJ06CC3333 GJ06AA1111 
Car GJ06DD4444 parked. Slots left: 0
Parking Full!
```
