#include "Personnage.hpp"

//construteur:
// Personnage::Personnage()
// {
// 	m_vie = 100;
// 	m_mana = 100;
// 	m_nomArme = "Paquet de chips";
// 	m_degatsArme = 1;
// }

//ou liste d'initialisation :
// Personnage::Personnage() : m_vie(100), m_mana(100), m_nomArme("Paquet de chips"),
// m_degatsArme(1)
// {

// }

//surcharger constructeur:
// Personnage::Personnage(std::string nomArme, int degatsArme) : m_vie(100),
// m_mana(100), m_arme(nomArme, degatsArme)
// {

// }

Personnage::Personnage(std::string nomArme, int degtasArme) : m_vie(100),
m_mana(100), m_arme("cacahuetes", 1)//m_arme() appelle contructeur Arme
{
	
}

//destructeur :
Personnage::~Personnage()
{
    /* Rien à mettre ici car on ne fait pas d'allocation dynamique
    dans la classe Personnage. Le destructeur est donc inutile mais
    je le mets pour montrer à quoi cela ressemble.
    En temps normal, un destructeur fait souvent des delete et quelques
    autres vérifications si nécessaire avant la destruction de l'objet. */
}

//utilisation de l'objet :
void	Personnage::recevoirDegats(int nbrDegats)
{
	m_vie	= m_vie - nbrDegats;
	//on enkeve le nombre de degats recus a la vie du personnage
	if (m_vie < 0)//pour eviter d'avoirune vie negative
		m_vie = 0;
}

//j'arrive pas a changer cette fonction la avec la classe Arme
// void	Personnage::attaquer(Personnage &cible)
// {
// 	cible.recevoirDegats(m_degatsArme);
// 	//on inflige a la cible les degats que cause notre arme
// }

void	Personnage::boirePotionDeVie(int quantitePotion)
{
	m_vie = m_vie + quantitePotion;
	if (m_vie > 100)//interdiction de depasser 100 de vie
		m_vie = 100;
}

void	Personnage::changerArme(std::string nomNouvelleArme, int degatsNouvelleArme)
{
	m_arme.changer(nomNouvelleArme, degatsNouvelleArme);
}

bool	Personnage::estVivant() const
{
	return m_vie > 0;
}

void	Personnage::afficherEtat() const
{
	std::cout << "vie : " << m_vie << std::endl;
	std::cout << "mana : " << m_mana << std::endl;
	m_arme.afficher();
	
}