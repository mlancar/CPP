#ifndef ARME_HPP
# define ARME_HPP

# include <iostream>

class	Arme
{
	public:
		
		Arme();//constructeur
		Arme(std::string nom, int degats);//constructeur surcharge

		void 		changer(std::string nom, int degats);
		void 		afficher() const;
		int			getDegats() const;//getter : methode public pour acceder a attribut prive de la meme classe
		std::string	getArme() const;
	
	private:

		std::string m_nom;
		int			m_degats;
};

#endif