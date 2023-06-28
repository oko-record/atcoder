#include <iostream>
#include <string>
using namespace std;
#include "HealthCheck.h"

double HealthChecker::getBmi()
{
    if (this->bmi == 0)
    {
        double mHeight = this->height / 100;
        this->bmi = this->weight / mHeight / mHeight;
    }

    return this->bmi;
}

HealthChecker::HealthChecker(string name, double height, double weight)
{
    this->name = name;
    this->height = height;
    this->weight = weight;
    this->bmi = 0;
}

string HealthChecker::getName()
{
    return this->name;
}