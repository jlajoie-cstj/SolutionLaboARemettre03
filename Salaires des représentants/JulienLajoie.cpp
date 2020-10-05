// But : Développer un programme qui doit calculer le salaire hebdomadaire selon les ventes brutes du représentant.
// Auteur : Julien Lajoie
// Date : 2020-10-04

// Début du programme
#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	
	// Déclaration des variables  

	int repNum1; // Variable des ventes faites par le représentant
	float pourcentageVenteBrute = 7.5; // (7,5 pour-cent)  
	float salaireSemaine = 250; // Salaire constant par semaine
	float salaireRepresentant = 0; // est égale à zero au début du programme 
	float nbFois = 0;	// Tant que le programme ne détecte pas la réponse repNum1 == -1 
						//le programme continue de demander a l'utilisateur d'entré les ventes brutes du représentant 
	
	//Début officiel du programme.

	cout << "Veuillez entrer les ventes brutes effectué par le représentant : " << endl; // demander à l'utilisateur d'entrer une réponse.
	cin >> repNum1; // permet de lire la réponse de l'utilisateur 
	
	while (repNum1 != -1)// Si la réponse n'est pas -1 le programme continue a l'infini .
	{
		system("pause");
		system("cls");
		
		cout << "le salaire brute du représentant s'élève a un montant de : " << endl;
		salaireRepresentant = repNum1 / pourcentageVenteBrute + salaireSemaine; // calcul du salaire hebdomadaire du représentant.
		cout << salaireRepresentant << endl; // le programme affiche la Réponse
		cout << "Veuillez entrer les ventes brutes effectué par le représentant : " << endl;// La boucle reprend 
		cin >> repNum1;// le programme redemande un chiffre ou un nombre != -1

		nbFois++; // Relancement de la boucle
	}
			cout << "Vous avez décidé(e) de quitter le programme";// le programme affiche ce message si jamais la reponse de repNum1 est de -1 
		
	
return 0; // Fin du programme
}