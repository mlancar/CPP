#ifndef PERSONNAGE_HPP
# define PERSONNAGE_HPP

#include <iostream>
#include "Arme.hpp"

//creer class :
class Personnage
{
	//Methodes
	//tout ce qui suit est public
	public:
	
		Personnage();
		Personnage(std::string nomArme, int degtasArme);
		~Personnage();

		void	recevoirDegats(int nbrDegats);//pas const car modifie valeur
		void	attaquer(Personnage &cible);
		void	boirePotionDeVie(int quantitePotion);
		void	changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
		bool	estVivant() const;//const modifie pas l'objet
		void	afficherEtat() const;

	//Attributs
	//tout ce qui suit est prive
	private:

		int			m_vie;
		int			m_mana;
		// std::string	m_nomArme;
		// int			m_degatsArme;
		Arme	m_arme;
};

//const:
// Pour vous : votre méthode ne fait que lire les attributs, et vous vous 
// interdisez dès le début de les modifier. Si par erreur vous tentez
// d'en modifier un, le compilateur plante en vous reprochant de ne pas
// respecter la règle que vous vous êtes fixée. Et cela, c'est bien.
// Pour les utilisateurs de votre classe : cela leur indique que la méthode
// se contente de renvoyer un résultat et qu'elle ne modifie pas l'objet.
// Dans une documentation, le mot-clé const apparaît dans le prototype de la
// méthode et c'est un excellent indicateur de ce qu'elle fait, ou plutôt de
// ce qu'elle ne peut pas faire (cela pourrait se traduire par : 
// "cette méthode ne modifiera pas votre objet").
// Pour le compilateur : si vous vous rappelez le chapitre sur les variables,
// je vous conseillais de toujours déclarer const ce qui peut l'être. Nous sommes
// ici dans le même cas. On offre des garanties aux utilisateurs de la classe,
// et on aide le compilateur à générer du code binaire de meilleure qualité.

#endif