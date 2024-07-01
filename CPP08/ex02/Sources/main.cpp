/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malancar <malancar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 16:17:57 by malancar          #+#    #+#             */
/*   Updated: 2024/07/01 17:49:15 by malancar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main() {
	
	std::cout << "TEST SUBJECT" << std::endl;
	MutantStack<int> mstack;
	
	mstack.push(5);
	mstack.push(17);
	
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);

	mstack.push(0);
	
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	
	++it;
	--it;
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
	std::cout << "TEST VECTOR" << std::endl;
	std::vector<int> myVector;
	
	myVector.push_back(5);
	myVector.push_back(17);
	
	std::cout << myVector.back() << std::endl;
	myVector.pop_back();
	std::cout << myVector.size() << std::endl;
	myVector.push_back(3);
	myVector.push_back(5);
	myVector.push_back(737);

	myVector.push_back(0);
	
	std::vector<int>::iterator iBegin = myVector.begin();
	std::vector<int>::iterator iEnd = myVector.end();
	
	++it;
	--it;
	
	while (iBegin != iEnd)
	{
		std::cout << *iBegin << std::endl;
		++iBegin;
	}
	std::cout << std::endl;
	
	std::stack<int> s(mstack);
	
	std::cout << "TEST WITH CHAR" << std::endl;
	MutantStack<char> mutantStack;

	for (char c = 'a'; c <= 'z'; c++) {
		mutantStack.push(c);
	}
	
	for (MutantStack<char>::iterator it = mutantStack.begin(); it != mutantStack.end();++it) {
		std::cout << "Mutant stack = " << *it << std::endl;	
	}
	std::cout << std::endl;
	
}