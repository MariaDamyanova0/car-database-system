#include <iostream>
#include "Cars.h"

// променлива за статичната данна
int Cars::carCount = 0;

// конструктори
Cars::Cars(string b, string m, string c, float v, float p):
    brand(b),
    model(m), 
    color(c), 
    engineVolume(v),
    price(p) {
    carCount++;
}

Cars::Cars() {
    brand = model = color = ""; 
    engineVolume = 0.0f;               
    price = 0.0f;                      
    carCount++;                        
}


// Деструктор
Cars::~Cars()
{
    carCount--;  // Коригира преброяването 
}

// Print функция
void Cars::print() const {
    cout << "Brand: " << brand << ", Model: " << model
        << ", Color: " << color << ", Engine Volume: " << engineVolume
        << ", Price: " << price << endl;
}

// Статична функция за връщане на бройката на колите
int Cars::getCarCount() {
    return carCount; 
}

// Статична функция за сравнение на колите 
void Cars::compareCars(const Cars cars[], int size) {
    if (size < 1) return; 

    float maxPrice = cars[0].getPrice();
    string mostExpensiveBrand = cars[0].getBrand();

    for (int i = 1; i < size; ++i) {
        if (cars[i].getPrice() > maxPrice) {
            maxPrice = cars[i].getPrice();
            mostExpensiveBrand = cars[i].getBrand();
        }
    }

    cout << "The most expensive car is: " << mostExpensiveBrand
        << " with price: " << maxPrice << endl;
}
