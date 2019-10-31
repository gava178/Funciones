#include<iostream>
#include<string>
using namespace std;
//Declaramos prototipos de funciones 
void menu();
int suma();
int resta();
int multi();
int division();
void pausa();

int main()
{
	menu();
	return 0;
}
//Creamos funciones
void menu()
{
	bool bandera = false;
	char tecla;
	do
	{
		system("cls");
		cin.clear();
		cout << "Calculadora con Funciones" << endl;
		cout << "------------------------ " << endl;
		cout << "\t1.- sumar" << endl;
		cout << "\t2.- restar" << endl;
		cout << "\t3.- multiplicar" << endl;
		cout << "\t4.- dividir" << endl;
		cout << "\t5.- salir" << endl;
		cout << "Elige una opcion: ";
		cin >> tecla;
		switch (tecla)
		{
		case '1' :
			system("cls");
			suma();
			break;
		case '2':
			system("cls");
			resta();
			break;
		case '3':
			system("cls");
			multi();
			break;
		case '4':
			system("cls");
			division();
			break;
		case '5':
			
			bandera = true;
			break;
		default:
			system("cls");
			cout << "opcion no valida" << endl;
			pausa();
			break;
	    }
	} while (bandera != true);
}
void pausa()
{
	cout << endl << "Pulsa cualquier tecla para continuar" << endl;
	getwchar();
	getwchar();
}
int suma()
{
	int a, b, suma;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	suma = a + b;
	cout << "La suma es : " << suma;
	pausa();
	return 0;
}
int resta()
{
	int a, b, resta;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	resta = a - b;
	cout << "La resta es : " << resta;
	pausa();
	return 0;
}
int multi()
{
	int a, b, multiplicacion;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	multiplicacion = a * b;
	cout << "La multiplicacion es : " << multiplicacion;
	pausa();
	return 0;
}
int division()
{
	int a, b, division;
	cout << "Primer valor: ";
	cin >> a;
	cout << "Segundo valor: ";
	cin >> b;
	division = a / b;
	cout << "La division es : " << division;
	pausa();
	return 0;
}