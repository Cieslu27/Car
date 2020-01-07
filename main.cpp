#include <iostream>
#include "car.h"

using namespace std;


int main()
{
    Car auto1;
    auto1.open();

    Auto samochod1;
    samochod1.load(); // Przy podowaniu marki auta prosze wpisywac tylko BMW, Mercedes, Volkswagen albo Audi

    sedzia(auto1, samochod1);

    zapis(samochod1);

    return 0;
}
