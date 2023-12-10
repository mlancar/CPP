#include "Arme.hpp"

Arme::Arme() : m_nom("cacahuetes"), m_degats(1)
{

}

Arme::Arme(std::string nom, int degats) : m_nom(nom), m_degats(degats)
{

}

void	Arme::changer(std::string nom, int degats)
{
	m_nom = nom;
	m_degats = degats;
}

// void	Arme::attaquer(std::string cible)
// {
	
// }

void	Arme::afficher() const
{
	std::cout << "Arme : " << m_nom << "(Degats : " << m_degats << ")" << std::endl;

}

int		Arme::getDegats() const
{
	return(m_degats);
}

std::string		Arme::getArme() const
{
	return(m_nom);
}
