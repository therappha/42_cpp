/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 15:24:50 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/05/13 16:19:32 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <string>

class Brain{

private:

protected:

public:
	std::string ideas[100];
	Brain(); // default constructor
	Brain& operator = (const Brain& other); // copy assigment operator
	Brain(const Brain& other); //copy constructor
	~Brain(); //destructor

};

/*
Implement a Brain class. It contains an array of 100 std::string called ideas.
This way, Dog and Cat will have a private Brain* attribute.
Upon construction, Dog and Cat will create their Brain using new Brain();
Upon destruction, Dog and Cat will delete their Brain.
*/


#endif
