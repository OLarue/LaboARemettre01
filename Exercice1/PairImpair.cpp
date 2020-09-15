// But: Écrire un programme qui lit un entier et qui détermine et affiche s’il s’agit d’un entier pair d’un entier impair
// Auteur: Olivier Larue
// Date: 14 septembre 2020


#include <iostream>

void main()
{ 
	setlocale(LC_ALL, "");    // Pour convertir les accents dans la console

	// Variable nb1 qui va être déterminé par l'utilisateur

	int nb1;

	//Programme demande un entier à l'utilisateur
	//On invite l'utilisateur a entrer un entier
	 
	std::cout << " veuillez entrer un nombre entier: ";
	// le programme lit le nombre sur le clavier 
	std::cin >> nb1; 
	// Si l'utilisateur met un nombre pair il restera 0 lors du modulo (%) KM : Il faut préciser % 2, donc le nombre est pair
	if (nb1 % 2 == 0)
	{
		std::cout << nb1 << " Est pair ";
	}
	// Si l'utilisateur met un nombre impair il restera 1 lors du modulo (%) donc le nombre est impair
	else
	{
		std::cout << nb1 << " Est impair ";
	}
}


/* Plan test:
nb1      résultat

23        Impair 
0         pair
-1        impair 
-123434   pair
150897999123   impair
14        pair
*/
