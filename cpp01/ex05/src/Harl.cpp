/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 16:21:00 by thibault          #+#    #+#             */
/*   Updated: 2023/11/29 17:25:10 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
	std::cout << WHITE "Harl" GREEN " created" EOC <<  std::endl;
}

Harl::~Harl() {
	std::cout << WHITE "Harl" RED " deleted" EOC <<  std::endl;
}

void Harl::complain(std::string level) {
	if (level == "DEBUG") {
		Harl::debug();
	} else if (level == "INFO") {
		Harl::info();
	} else if (level == "WARNING") {
		Harl::warning();
	} else if (level == "ERROR") {
		Harl::error();
	} else {
		std::cout << RED "Unknown complaint level" WHITE ": " << level << EOC << std::endl;
	}
}

void Harl::debug() {
	std::cout << YELLOW "DEBUG" WHITE ": I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" EOC << std::endl;
}

void Harl::info() {
	std::cout << YELLOW "INFO" WHITE ": I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" EOC << std::endl;
}

void Harl::warning() {
	std::cout << YELLOW "WARNING" WHITE ": I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." EOC << std::endl;
}

void Harl::error() {
	std::cout << YELLOW "ERROR" WHITE ": This is unacceptable! I want to speak to the manager now." EOC << std::endl;
}