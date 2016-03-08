# include <iostream>
# include <cstdlib>
using namespace std;

enum { dodawanie, odejmowanie, mnozenie, dzielenie, kwadrat, szescian, tworca, wyjscie }; 
// enum - typ wyliczeniowy (przyporz¹dkowuje od 0 i kolejno 1, 2, 3 itd- nie musi miec nazwy

int main() 
{
int liczba1; // float - liczba rzeczywista (z przecinkami)
int liczba2; // int - integer - liczba calkowita (bez przecinków)
int rodzaj_dzialania;

cout << "\nWitaj w kalkulatorze, ktory pozwoli Ci wykonac kilka dzialan na 2 liczbach: \n\n";

while(true)
{
	cout << "Podaj 1 liczbe: ";
	cin >> liczba1;
	cout << endl << endl; // endl i "\n" to ENTER (end line) - wpisujemy w sekcji z cout (wyjscia danych)
	
	cout << "Podaj 2 liczbe: ";
	cin >> liczba2;
	cout << endl << endl;
	
	cout << "Jakie dzialanie wykonac?  : [0] - DODAWANIE" << endl;
	cout << "                          : [1] - ODEJMOWANIE" << endl;
	cout << "                          : [2] - MNOZENIE" << endl;
	cout << "                          : [3] - DZIELENIE" << endl;
	cout << "                          : [4] - KWADRAT LICZB" << endl;  
	cout << "                          : [5] - SZESCIAN LICZB" << endl; 
	cout << "_________________________________________________" << endl; 
	cout << "                          : [6] - Autor programu" << endl; 
	cout << "                          : [7] - Wyjscie" << endl;
	cout << endl << endl;
	
	cin >> rodzaj_dzialania;
	cout << endl << endl;
	
	if ( rodzaj_dzialania == wyjscie )
	{
		break;
	}
	
	switch (rodzaj_dzialania) // ponizsze podstawowe dzialania na liczbach nie wymagaj¹ biblioteki math.h (#include <math.h>)
	{
		case dodawanie: cout << "Suma liczb wynosi: " << liczba1 + liczba2 << endl; break;
		case odejmowanie: cout << "Roznica liczb wynosi: " << liczba1 - liczba2 << endl; break;
		case mnozenie: cout << "Iloczyn liczb wynosi: " << liczba1 * liczba2 << endl; break;
		case dzielenie: cout << "Iloraz liczb wynosi: " << liczba1 / liczba2 << endl; break;
	// case dzielenie: cout << "Iloraz liczb wynosi: " << liczba1 / liczba2 << "," << liczba1 % liczba2 << endl; break;
	// tak zapisal bym kod dla dzielenia gdybym uzy³ liczb calkowitych int -  % - reszta dzielenia liczb calkowitych
		case kwadrat: cout << "Kwadrat 1 liczby (" << liczba1 << ") wynosi: " << liczba1 * liczba1<< endl;
					  cout << "Kwadrat 2 liczby (" << liczba2 << ") wynosi: " << liczba2 * liczba2 << endl; break;
		case szescian: cout << "Szescian 1 liczby (" << liczba1 << ") wynosi: " << liczba1 * liczba1 * liczba1<< endl;
					   cout << "Szescian 2 liczby (" << liczba2 << ") wynosi: " << liczba2 * liczba2 * liczba2<< endl; break;	
		case tworca: 
				cout << "       _______ __ _______ _______ _______"<< endl;
				cout << "      /__  __// // _____// _____// ___  /"<< endl;
				cout << "        / /  / // /____ / /____ / /__/ /"<< endl;
				cout << "       / /  / // //_  // _____//   ___/"<< endl;
				cout << "      / /  / // /__/ // /____ / /\\ \\"<< endl;
				cout << "     /_/  /_//______//______//_/  \\_\\"<< endl;	 
				break;				
		default:
			cout << "Zly wybor" << endl; break; 
	}	
	cout << endl << endl;	
	system ("pause");
	system("cls"); // czyszczenie ekranu
}
	return 0;
}
