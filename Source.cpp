#include <iostream>
#include "Cars.h"
using namespace std;

int main() {
     //Задаваме данни за 4 коли
    const int numberOfCars = 4; // дефинираме броя
    Cars carArray[numberOfCars] = {
        Cars("Toyota", "Camry", "Blue", 2.5f, 24000.0f),
        Cars("Honda", "Accord", "Red", 2.0f, 23000.0f),
        Cars("Ford", "Mustang", "Black", 5.0f, 35000.0f),
        Cars("Tesla", "Model 3", "White", 0.0f, 40000.0f) // При електрическа кола,обемът на двигател може да е 0;
    };

    cout << "Cars details:\n";
    for (int i = 0; i < numberOfCars; i++) {
        carArray[i].print(); 
        cout << endl; 
    }
     //Сравняваме колите 
    Cars::compareCars(carArray, numberOfCars);

    return 0;
}


//int main() {
    //int numberOfCars;

   // cout << "Enter the number of cars: ";
   // cin >> numberOfCars;

    // Създаваме масив от коли
   // Cars* carArray = new Cars[numberOfCars]; 

    // Вкарваме детайли за всяка кола
   // for (int i = 0; i < numberOfCars; i++) {
       // string brand, model, color;
        //float engineVolume, price;

        //cout << "Enter details for car " << (i + 1) << endl;

        //cout << "Brand: ";
        //cin >> brand;

       // cout << "Model: ";
        //cin >> model;

        //cout << "Color: ";
        //cin >> color;

        //cout << "Engine Volume(L) ";
        //cin >> engineVolume;

        //cout << "Price: ";
       // cin >> price;

        
        //carArray[i] = Cars(brand, model, color, engineVolume, price);
    //}

    // Сравняваме колите
    //Cars::compareCars(carArray, numberOfCars);

    //return 0;
//}
