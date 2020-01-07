#include <iostream>
#include <fstream>
#include "Car.h"

using namespace std;

 void Car::load()
{
	cout << "Podaj marke auta: ";

	cin >> marka;
	cout << "Podaj model (Tylko niemieckie marki): ";
	cin >> model;
	cout << "Rodzaj nadwozia: ";
	cin >> nadwozie;
	cout << "Moc [KM]: ";
	cin  >> moc;
	cout << "Podaj rok produkcji: ";
	cin >> rok;
}

void Car::open()
{
	cout << marka << endl;
	cout << model << endl;
	cout << nadwozie << endl;
	cout << moc << endl;
	cout << rok<< endl;
}

Car::Car(string ma, string mo, string n, int m, int r)
{
	marka=ma;
	model=mo;
	nadwozie=n;
	moc=m;
	rok=r;
}

Car::~Car()
{
	cout << "Tu jest dekonstruktor"<<endl;;
}

 void Auto::load()
{
	int wybor;
	cout << endl << "1. BMW"<< endl;
	cout << "2. Mercedes" << endl;
	cout << "3. Volkswagen" << endl;
    cout << "Wybierz marke (wybierz numer i zatwierdz enterem): ";
    cin >> wybor;
	switch(wybor)
	{
	case 1: marka1="BMW"; break;
	case 2: marka1="Mercedes"; break;
	case 3: marka1="Volkswagen"; break;
	}
	cout << "Podaj model: ";
	cin >> model1;
	cout << "Rodzaj nadwozia: ";
	cin >> nadwozie1;
	cout << "Moc KM: ";
	cin >> moc1;
	cout << "Podaj rok produkcji: ";
	cin >> rok1;
}

void Auto::open()
{
	cout << marka1 << endl;
	cout << model1 << endl;
	cout << nadwozie1 << endl;
	cout << moc1 << endl;
	cout << rok1 << endl;
}

void sedzia (Car &auto1, Auto &samochod1)
{
if((auto1.marka=="Audi")&&(samochod1.marka1=="BMW"))
cout << "Audi zawsze jest lepsze od BMW"<<endl;
else if ((auto1.marka=="Audi")&&(samochod1.marka1=="Mercedes"))
cout << "Audi lepsze, ale Mercedes i tak lepszy od BMW"<<endl;
else if ((auto1.marka=="Audi")&&(samochod1.marka1=="Volkswagen"))
cout << "Takie same, ale znaczek Audi lepszy"<<endl;
else if ((auto1.marka=="Audi")&&(samochod1.marka1=="Audi"))
cout << "Auto tak samo fajne jak moje"<<endl;
else cout << "Zle!"<<endl;
}

void zapis(Auto &samochod1)
{
int wybor;
cout << "Czy zapisac dane do pliku tekstowego?"<<endl;
cout << "1. Tak"<<endl;
cout << "2. Nie"<<endl;
cin >> wybor;
if(wybor==1)
{ fstream plik;                              //Zapisanie wprowadzonych danych do pliku Audi.txt
plik.open("Auto.txt",ios::out);
    plik<<samochod1.marka1<<endl;
    plik<<samochod1.model1<<endl;
    plik<<samochod1.nadwozie1<<endl;
    plik<<samochod1.moc1<<endl;
    plik<<samochod1.rok1<<endl;
    cout << "Wprowadzone dane zapisane w pliku txt"<<endl; }
else cout << "Wyjscie z pogramu"<<endl;

}
