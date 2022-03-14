// 192_U6_celsius_in_fahrenheit.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//Das Programm Berechnet Grad Celsius in Fahrenheit und umgekehrt
//Autor: Mato Bajusic

#include "../std_lib_facilities.h"

double ctof(double c)
{
	if (c < -273.15) error("\nctof(): Eingabe C, Absolute Nullpunkt liegt bei -273.15 C");
	if (!cin) error("ctof(): Ungueltige Eingabe fuer c");
	//x °C = (x*9 / 5+32) = °F
	double fahrenheit = (c * 9) / 5 + 32;
	
	return fahrenheit;

}

double ftoc(double f)
{
	if (f < -459.67) error("\nctof(): Eingabe F, Absolute Nullpunkt liegt bei -456.67 F");
	if (!cin) error("ftoc(): Ungueltige Eingabe fuer f");
	
	//(x°F − 32) × 5/9 = 0°C
	double fahrenheit = (f - 32) * 5/9;

	return fahrenheit;
}

int main()
try{
	double c = 0;
	double f = 0;

	cout << "\nBitte geben Sie die Temperatur in C ein: ";
	cin >> c;
	double fahrenehit = ctof(c);
	cout << "\n" << c << " C" << " = " << fahrenehit << " F " << endl;
	
	
	cout << "\nBitte geben Sie die Temperatur in F ein: ";
	cin >> f;
	double celsius = ftoc(f);
	cout << "\n" << f << " F" << " = " << celsius << " C " << endl;
}
catch (exception& e) {
	cerr << "Exception " << e.what() << endl;
}

catch (...) {
	cerr << "Unerwarteter Fehler";
}