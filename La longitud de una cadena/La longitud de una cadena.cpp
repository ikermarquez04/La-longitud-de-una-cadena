#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int main()
{
	char palabra[] = "hey";
	int longitud = 0;

	longitud = strlen(palabra);

	cout << "numero de elementos de la cadena es: " << longitud << endl;

	getch();
	return 0;
}
