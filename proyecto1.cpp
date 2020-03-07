#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  int iA;
  int iLugar;
  char cA, cB, cC, cD, cE, cF, cG, cH, cI, cJ, cK, cL, cM, cN;
  string sEncript;
  int iValor[1000];
  string sArchivoE;
  string sArchivoS;

  cout << "Escribe el nombre del archivo de entrada: " << endl;
  getline(cin, sArchivoE);

  cout << "Escribe el nombre del archivo de salida: " << endl;
  getline(cin, sArchivoS);

  ifstream ifCodigos;
  ifCodigos.open("entradaP1.txt");

  ofstream ofCodigos;
  ofCodigos.open("salidaP1.txt");

  ifCodigos >> cA >> cB >> cC >> cD >> cE >> cF >> cG >> cH >> cI >> cJ >> cK >> cL >> cM >> cN;

  

  return 0;

}
