/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:29:13 by malancar          #+#    #+#             */
/*   Updated: 2024/06/22 16:28:16 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename L>

//ou specialisation

void	iter(T array[], L len, void (*function) (T)) {

	for (L i = 0; i < len; i++) {
		function(array[i]);
	}
}

#endif