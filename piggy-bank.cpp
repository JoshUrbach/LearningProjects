/*
Name: Josh Urbach
Description: Convert currency to US Dollars 
Date last modified: 5/4/2022
*/

#include <iostream>

using namespace std;

int main() {

  //declare constants
  const double pesos_to_us = 0.00032, reais_to_us = 0.27, soles_to_us = 0.3;
  //declare variables
  double pesos, reais, soles, dollars;

  //Get user input for each currency
  cout << "Enter number of Colombian Pesos: ";
  cin >> pesos;

  cout << "Enter number of Brazilian Reais: ";
  cin >> reais;

  cout << "Enter number of Peruvian Soles: ";
  cin >> soles;

  dollars = (pesos_to_us * pesos) + (reais_to_us * reais) + (soles_to_us* soles);

  cout << "US Dollars = $" << dollars << endl;

}

/*
SAMPLE OUTPUT:
Enter number of Colombian Pesos: 4
Enter number of Brazilian Reais: 6
Enter number of Peruvian Soles: 5
US Dollars = $3.12128
*/
