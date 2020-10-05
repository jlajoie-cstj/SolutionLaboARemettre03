// But: 
// Auteur: Julien Lajoie
// Date: 2020-10-05
#include<iostream>
#include <time.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	int choixUtilisateur;
	int iRandom; // permet de mémoriser le nombre choisi aléatoirement par l’ordinateur
	srand(time(0)); // pour activer l’aléatoire dans le programme
	iRandom = rand() % 101; // l’ordinateur calcule un nombre aléatoire entre 0 et 100 et le stocke dans iRandom

	cout << "Veuillez entrer un nombre entre 0 et 100 : ";
	cin >> choixUtilisateur;
	
	int cpt = 4;
	
	while (choixUtilisateur)
	{
		if (choixUtilisateur == iRandom) // Le programme analyse la réponse et cherche dans quel catégorie ce nombre appartient
		{
			cout << "Bien joué vous avez gagné la réponse étais bel et bien " << iRandom << endl;
			system("pause");
			system("cls");
		}

		if (choixUtilisateur <! iRandom && choixUtilisateur >= 0)// si le nombre donné est plus grand que le "iRandom". 
		{
			system("pause");
			system("cls");
			cout << "Il vous reste " << cpt - 1 << " autres chances" << endl;
			cout << "Le nombre est plus grand que celui entré précédemment" << endl;
			cout << "Veuillez entrer un autre nombre qui est situé entre 0 et 100 " << endl;
			cin >> choixUtilisateur;
			cpt--;
			cpt > 0;
		}

		if (choixUtilisateur >! iRandom && choixUtilisateur <= 100)// si le nombre donné est plus petit que le "iRandom". 
		{
			system("pause");
			system("cls");
			cout << "Il vous reste " << cpt - 1 << " autres chances" << endl;
			cout << "Le nombre est plus petit que celui entré précédemment" << endl;
			cout << "Veuillez entrer un autre nombre qui est situé entre 0 et 100 " << endl;
			cin >> choixUtilisateur;
			cpt--;
			cpt > 0;
		}

		if (choixUtilisateur < -1 || choixUtilisateur > 100)
		{
			system("pause");
			system("cls");
			cout << "Il vous reste " << cpt - 1 << " autres chances" << endl;
			cout << "Veuillez entrer un nombre qui est bien situé entre 0 et 100 " << endl;
			cin >> choixUtilisateur;
			cpt--;
			cpt > 0;
		}
		
		if (cpt == 0)
		{
			system("pause");
			system("cls");
			cout << "C'est terminé meilleur chance la prochaine fois !" << endl;
			cout << "La réponse étais : " << iRandom << endl;
			return 0;
		}

	}
	/*
	* 
		PLAN DE TEST
		choixUtilisateur

	>	1				
		
Il vous reste 4 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100
		
	>	5

Il vous reste 3 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	65

Il vous reste 2 autres chances
Le nombre est plus petit que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	-2

Il vous reste 1 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	109

Appuyez sur une touche pour continuer...
C'est terminé meilleur chance la prochaine fois !
La réponse étais : 49

--------------------------------------------------------------------
--------------------------------------------------------------------

	>	1

Il vous reste 4 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	5

Il vous reste 3 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	65

Il vous reste 2 autres chances
Le nombre est plus petit que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	-2

Il vous reste 1 autres chances
Le nombre est plus grand que celui entré précédemment
Veuillez entrer un autre nombre qui est situé entre 0 et 100

	>	29

Appuyez sur une touche pour continuer...
Bien joué vous avez gagné la réponse étais bel et bien : 29



	* 
	*/
	
	
}