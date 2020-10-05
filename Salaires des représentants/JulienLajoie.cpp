// But : D�velopper un programme qui doit calculer le salaire hebdomadaire selon les ventes brutes du repr�sentant.
// Auteur : Julien Lajoie
// Date : 2020-10-04

// D�but du programme
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	// D�claration des variables  

	int repNum1; // Variable des ventes faites par le repr�sentant
	float pourcentageVenteBrute = 7.5; // (7,5 pour-cent)  
	float salaireSemaine = 250; // Salaire constant par semaine
	float salaireRepresentant = 0; // est �gale � zero au d�but du programme 
	float nbFois = 0;	// Tant que le programme ne d�tecte pas la r�ponse repNum1 == -1 
						//le programme continue de demander a l'utilisateur d'entr� les ventes brutes du repr�sentant 
	
	//D�but officiel du programme.

	cout << "Veuillez entrer les ventes brutes effectu� par le repr�sentant : " << endl; // demander � l'utilisateur d'entrer une r�ponse.
	cin >> repNum1; // permet de lire la r�ponse de l'utilisateur 
	
	while (repNum1 != -1)// Si la r�ponse n'est pas -1 le programme continue a l'infini .
	{
		system("pause");
		system("cls");
		
		cout << "le salaire brute du repr�sentant s'�l�ve a un montant de : " << endl;
		salaireRepresentant = repNum1 / pourcentageVenteBrute + salaireSemaine; // calcul du salaire hebdomadaire du repr�sentant.
		cout << salaireRepresentant << endl; // le programme affiche la R�ponse
		cout << "Veuillez entrer les ventes brutes effectu� par le repr�sentant : " << endl;// La boucle reprend 
		cin >> repNum1;// le programme redemande un chiffre ou un nombre != -1

		nbFois++; // Relancement de la boucle
	}
			cout << "Vous avez d�cid�(e) de quitter le programme";// le programme affiche ce message si jamais la reponse de repNum1 est de -1 
		
	
return 0; // Fin du programme
}