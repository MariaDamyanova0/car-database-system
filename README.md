# OOP Coursework - Cars Management

This project demonstrates the use of **Object-Oriented Programming (OOP)** concepts in C++, focusing on classes, constructors, destructors, static members, and arrays of objects.

---

## Project Structure

- **Cars.h** – Header file defining the `Cars` class with private members, constructors, destructor, getter/setter methods, a `print` function, and static methods.
- **Cars.cpp** – Implementation of the `Cars` class, including constructors, destructor, `print` function, and static methods for counting and comparing cars.
- **source.cpp** – Main program demonstrating the creation of `Cars` objects, printing their details, and comparing their prices to find the most expensive car.

---

## Features

- **Class Design**: Encapsulates car details such as brand, model, color, engine volume, and price.
- **Constructors & Destructor**: 
  - Parameterized constructor to initialize a car with specific details.
  - Default constructor initializes with empty/default values.
  - Destructor decreases the car count when a `Cars` object is destroyed.
- **Static Members**: 
  - `carCount` to track the total number of car objects.
  - `compareCars()` to find the most expensive car in an array of `Cars`.
- **Printing Functionality**: Display details of each car in a readable format.

---

## How to Compile and Run

1. Open your terminal or CMD.
2. Navigate to the project folder containing `Cars.h`, `Cars.cpp`, and `source.cpp`.
3. Compile the program using a C++ compiler (e.g., g++):
   ```bash
   g++ Cars.cpp source.cpp -o CarsProgram


