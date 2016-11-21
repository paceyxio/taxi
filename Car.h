//
// Created by paceyxio 2016/11/18.
//

#ifndef TAXI_CAR_H
#define TAXI_CAR_H

#include "iostream"
#include <string>

using namespace std;

class Car
{
public:
    Car();

    Car(string name, double price, int capacity);

    Car(string name, double price, double goods);

    Car(string name, double price, int capacity, double goods);

    string getName();

    void setName();

    double getPrice();

    void setPrice();

    int getCapacity();

    void setCapacity();

    double getGoods();

    void setGoods();

protected:
    string name;        //汽车车名
    double price;      //租金
    int capacity;       //容量
    double goods;       //载重
};

#endif //TAXI_CAR_H
