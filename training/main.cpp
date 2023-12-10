#include "Personnage.hpp"

int	main()
{
	//Personnage marine, louis;
	//Personnage marine, louis("Tsuki", 1);//louis constructeur surcharge
	Personnage louis("Louis");
	Personnage marine("Marine");//copie de louis


	//creation de 2 objets de type Personnage : marine et louis
	//les construcuteur de marine et louis sont appeles
	marine.attaquer(louis); //marine attaque louis
	louis.boirePotionDeVie(20);//louis recupere 20 PV en buvant la potiob
	louis.attaquer(marine);//louis attaque marine
	marine.attaquer(louis);//marine contre-attaque
	louis.changerArme("Tsuki", 20);
	louis.attaquer(marine);

	std::cout << "Marine" << std::endl;
	marine.afficherEtat();
	std::cout << "Louis" << std::endl;
	louis.afficherEtat();
	
	return 0;

}