/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 15:21:02 by malancar          #+#    #+#             */
/*   Updated: 2024/06/26 15:13:01 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"
#include "awesome.hpp"

int main() {
	int tab[] = {0, 1, 2, 3, 4};
	awesome tab2[5];
	
	iter(tab, 5, print<int>);
	iter(tab2, 5, print<awesome>);

	return 0;
}