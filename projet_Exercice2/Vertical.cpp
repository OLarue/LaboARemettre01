// but:  Un programme qui prend comme entr�e un nombre de cinq chiffres. Le programme v�rifie qu'il y a bien
// 5 chiffres dans le nombre.Puis il affiche le nombre verticalement, le premier chiffre sur la premi�re ligne, le
// deuxi�me chiffre sur la deuxi�me ligne, ainsi de suite
// Auteur: Olivier Larue 
// Date: 14 septembre 2020



#include <iostream>

int main()
{
	setlocale(LC_ALL, ""); //pour convertir les accents dans la console

	int nombre;
	// On demande � l'utilisateur d'entrer un nombre � 5 chiffres.
	std::cout << "veuillez entrer un nombre � 5 chiffres. " << ".";
	// le programme lit le nombre entrer par l'utilisateur.
	std::cin >> nombre;

	if (nombre >= 10000)
	{
		std::cout << nombre / 10000;
	}

	else
	{
		std::cout << "Ce nombre ne contient pas 5 chiffres.";
	}
	if (nombre >= 10000)
	{
		std::cout << nombre / 1100;
	}
	else
	{
		std::cout << " ce nombre ne contient pas 5 chiffres.";

	}
}


// je n'ai pas r�ussir � trouver les autres �quations pour aligner les chiffres verticalement :( mais au moins mon premier programme fonctionne bien! =D  