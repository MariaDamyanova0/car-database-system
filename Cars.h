#pragma once
#include<iostream>
using namespace std;

#ifndef CARS_H
#define CARS_H

class Cars {
private:
    string brand, model, color;
    float engineVolume;
    float price;
    static int carCount; //Статична данна

public:
    //Конструктор
    Cars(string, string, string, float, float); // Параметри
    Cars(); 

    ~Cars(); //Деструктор


    //Set функции
    void setBrand(string b) { brand = b; }
    void setModel(string m) { model = m; }
    void setColor(string c) { color = c; }
    void setEngineVolume(float v) { engineVolume = v; }
    void setPrice(float p) { price = p; }

    // Get функции
    string getBrand() const { return brand; }
    string getModel() const { return model; }
    string getColor() const { return color; }
    float getEngineVolume() const { return engineVolume; }
    float getPrice() const { return price; }

    // функция Print
    void print() const;

    // статична функция за брой коли
    static int getCarCount();

    // статична функция за сравнение
    static void compareCars(const Cars cars[], int size);
};

#endif
