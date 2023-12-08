#ifndef ARME_HPP
# define ARME_HPP

# include <iostream>

class	Arme
{
	public:
		
		Arme();//constructeur
		Arme(std::string nom, int degats);//constructeur surcharge
		void changer(std::string nom, int degats);
		
		void afficher() const;
	
	private:

		std::string m_nom;
		int	m_degats;
};

#endif