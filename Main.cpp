/*
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

void O() {

	double  pom_a, pom_b, pom_c;
	int  i = 0;
	string onp;
	ofstream zap("zapis.txt");
	ifstream wcz("wczyt.txt");

	double *T = new double[onp.length()];

	do {
		wcz >> onp;
		if (onp[0] >= '0' && onp[0] <= '9') {
			pom_a = pom_b = 0;
			do pom_a = 10 * pom_a + onp[pom_b++] - 48; while (onp[pom_b]);
			T[i++] = pom_a;
		}
		else if (onp[0] == '=') zap << T[--i] << endl;
		else {
			pom_b = T[--i]; pom_a = T[--i];

			if (onp == "+") pom_c = pom_a + pom_b;
			else if (onp == "-") pom_c = pom_a - pom_b;
			else if (onp == "*") pom_c = pom_a * pom_b;
			else if (onp == "/") pom_c = pom_a / pom_b;

			T[i++] = pom_c;
		}
	} while (onp != "=");
	//delete []T;

	zap.close();
	wcz.close();
}

void convert()
{
	int i = 0;
	string onp;
	ofstream zap("save2.txt");
	ifstream wcz("read2.txt");

	char *T = new char[onp.length()];

	do {
		wcz >> onp;

		if (onp[0] >= '0' && onp[0] <= '9') zap << onp << " ";
		else
			switch (onp[0]) {
			case '+':;
			case '-': while (i && T[i - 1] != '(') zap << T[--i] << " ";
				T[i++] = onp[0];
				break;
			case '*':;
			case '/': while (i && T[i - 1] != '(' &&
				T[i - 1] != '+' &&
				T[i - 1] != '-') zap << T[--i] << " ";
				T[i++] = onp[0];
				break;
			case '(': T[i++] = '(';
				break;
			case ')': while (T[i - 1] != '(') zap << T[--i] << " ";
				i--;
				break;
			case '=': while (i) zap << T[--i] << " ";
				zap << " =\n\n";
				break;
			}
	} while (onp[0] != '=');
	//delete[] T;
	zap.close();
	wcz.close();
}

int main() {
	O();
	convert();

	return 0;
}

*/







/*int main() {
string onp;
cout << "Podaj ONP: ";
cin >> onp;
cout << O(onp);
}

double *T = new double[onp.length()];

int  pom_a, pom_b;

int j=0;
for(int i=0;i<onp.length();i++) {
if(onp[i]>='0'&&onp[i]<='9'){
// T[j++]=(double)onp[i]-48;

pom_a = pom_b = 0;
do pom_a = 10 * pom_a + onp[pom_b++] - 48; while(onp[pom_b]);
T[j++] = pom_a;
}
else{
switch(onp[i]) {
case '+' : T[j-2]=T[j-2]+T[j-1]; j--; break;
case '-' : T[j-2]=T[j-2]-T[j-1]; j--; break;
case '/' : T[j-2]=T[j-2]/T[j-1]; j--; break;
case '*' : T[j-2]=T[j-2]*T[j-1]; j--; break;
}
}
}
double zap=T[0];

return zap;
delete [] T;
*/



























/*
#include < iostream >
using namespace std;

struct liczba
{
	int wartosc;
	liczba *next;

};

//dodaj element do stosu (root)
void dodaj(liczba **root)
{
	liczba *nowa = new liczba;
	cin >> nowa->wartosc;
	nowa->next = *root;
	*root = nowa;
}

//zdejmij element ze stosu (root)
void zdejmij(liczba **root)
{
	if (*root) //sprawdz czy stos nie jest juz pusty
	{
		liczba *temp = *root;
		*root = (*root)->next;
		cout << temp->wartosc << endl;
		delete temp;
	}
}

void podejrzyj(liczba **root)
{
	liczba *temp = *root;
	cout << temp->wartosc << endl;
}

void czypusty(liczba **root)
{
	//liczba *temp = *root;
	if (!*root)
	{
		cout << "zbior jest pusty" << endl;
	}
	else
	{
		cout << "zbior nie jest pusty" << endl;
	}
}

void rozmiar(int rozmiarint)
{
	//liczba *temp = *root;
	cout << "rozmiar stosu wynosi: ";
	cout << rozmiarint<< endl;
}

int main()
{
	char warunek;
	int rozmiarint = 0;
	liczba *root = NULL, *nowa = NULL;
	while (cin >> warunek)
	{
		switch (warunek)
		{
		case 'd': //dodaj element do stosu
			dodaj(&root);
			rozmiarint++;
			break;
		case 'z':
			zdejmij(&root); //zdejmi element ze stosu
			if(rozmiarint>0) rozmiarint--;
			break;
		case 'p' :
			podejrzyj(&root); //podejzyj element stosu
			break;
		case 'c':
			czypusty(&root); //Sprawdü, czy stos jest pusty
			break;
		case 'r':
			rozmiar(rozmiarint);
			break;
		case 'k': //zakoncz program
			return 0;
		}
	}

	return 0;
}
*/