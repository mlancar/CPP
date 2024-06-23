/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 16:29:13 by malancar          #+#    #+#             */
/*   Updated: 2024/06/23 13:43:45 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

template <typename T, typename L>

//ou specialisation

void	iter(T array[], L len, void (*function) (T const &)) {

	for (L i = 0; i < len; i++) {
		function(array[i]);
	}
}

#endif