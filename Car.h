#include <iostream>

using namespace std;

class Auto; // deklaracja o pozniejszym stworzeniu kolejnej klasy

class Car
{
    private:
    	string marka, model, nadwozie;
    	int moc, rok;

	public:
		Car(string="Audi", string="A4",string="sedan",int=101, int=1995);
		~Car();
		void load();
		void open();
		friend void sedzia(Car &auto1, Auto &samochod1);

};

class Auto
{
    private:
    	string marka1, model1, nadwozie1;
    	int moc1, rok1;

	public:
		void load();
		void open();
		friend void sedzia(Car &auto1, Auto &samochod1);
        friend void zapis(Auto &samochod1);

};
