#include <iostream>
#include <iomanip>
#include <cstdlib> 
#include <ctime>  

using namespace std;

int main()
{
  int frecuencia1 = 0; 
  int frecuencia2 = 0; 
  int frecuencia3 = 0; 
  int frecuencia4 = 0;
  int frecuencia5 = 0;
  int frecuencia6 = 0;

  //srand(time(0));
  //srand(time(NULL)); // TENGA CUIDADO SOLO LLAMRA UNA VEZ

  unsigned seed;
  cout << "Introduzca la semilla: ";
  cin >> seed;
  srand( seed ); // siembra el generador de números aleatorios
  
  int cara; 
  // sintetiza los resultados de tirar un dado 6,000,000 veces
  for ( int tiro = 1; tiro <= 6000000; tiro++ )
{
  cara = 1 + rand() % 6; // número aleatorio del 1 al 6
  // determina el valor del tiro de 1 a 6 e incrementa el contador apropiado
  switch ( cara )
    {
    case 1:
      ++frecuencia1; // incrementa el contador de 1s
      break;
    case 2:
      ++frecuencia2; 
      break;
    case 3:
      ++frecuencia3; 
      break;
    case 4:
      ++frecuencia4; 
      break;
    case 5:
      ++frecuencia5; 
      break;
    case 6:
      ++frecuencia6; 
      break;
    default: // valor inválido
      cout << "El programa nunca debio llegar aqui!";
    } // fin de switch
 } // fin de for

  cout << "Cara" << setw(13) << "  Frecuencia" << endl;
  cout << "1" << setw(13) << frecuencia1
    << "\n2" << setw(13) << frecuencia2
    << "\n3" << setw(13) << frecuencia3
    << "\n4" << setw(13) << frecuencia4
    << "\n5" << setw(13) << frecuencia5
    << "\n6" << setw(13) << frecuencia6<< endl;

return 0; // indica que
}
  
