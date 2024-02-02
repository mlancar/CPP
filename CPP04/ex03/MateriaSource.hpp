/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 12:53:29 by malancar          #+#    #+#             */
/*   Updated: 2024/02/02 14:38:57 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource {
	public:
		MateriaSource();
		MateriaSource(MateriaSource const& copy);
		~MateriaSource();

		MateriaSource &operator=(MateriaSource const& rhs);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);

		private:
			AMateria *inventory[4];
};

#endif