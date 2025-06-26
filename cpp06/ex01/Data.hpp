/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rafaelfe <rafaelfe@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/22 19:34:14 by rafaelfe          #+#    #+#             */
/*   Updated: 2025/06/25 20:19:03 by rafaelfe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdint.h>
#include <stdexcept>

class Data{

private:

	const std::string	_name;
	const uint32_t		_age;
	Data& operator= (const Data& other);

public:
	Data();
	~Data();
	Data(const Data& other);
	const std::string& getName(void) const;
	uint32_t getAge(void) const;
	Data(const std::string& name, const uint32_t age);


};
