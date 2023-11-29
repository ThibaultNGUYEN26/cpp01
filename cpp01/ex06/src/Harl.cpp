/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thibault <thibault@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 17:08:57 by thibault          #+#    #+#             */
/*   Updated: 2023/11/29 17:34:42 by thibault         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl() {
	std::cout << WHITE "Harl" GREEN " created\n" EOC <<  std::endl;
}

Harl::~Harl() {
	std::cout << WHITE "Harl" RED " deleted" EOC <<  std::endl;
}

void Harl::complain(const std::string& level) {
	enum LogLevel { DEBUG, INFO, WARNING, ERROR };

	LogLevel logLevel;

	if (level == "DEBUG") {
		logLevel = DEBUG;
	} else if (level == "INFO") {
		logLevel = INFO;
	} else if (level == "WARNING") {
		logLevel = WARNING;
	} else if (level == "ERROR") {
		logLevel = ERROR;
	} else {
		std::cout << RED "[ Probably complaining about insignificant problems ]\n" << EOC << std::endl;
		return;
	}

	for (int i = 0; i <= ERROR; ++i) {
		if (i >= logLevel) {
			switch (LogLevel(i)) {
				case DEBUG:
					std::cout << YELLOW "[ DEBUG ]" WHITE "\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n" EOC << std::endl;
					break;
				case INFO:
					std::cout << YELLOW "[ INFO ]" WHITE "\nI cannot believe adding extra bacon costs more money.\nYou didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!\n" EOC << std::endl;
					break;
				case WARNING:
					std::cout << YELLOW "[ WARNING ]" WHITE "\nI think I deserve to have some extra bacon for free.\nI've been coming for years whereas you started working here since last month.\n" EOC << std::endl;
					break;
				case ERROR:
					std::cout << YELLOW "[ ERROR ]" WHITE "\nThis is unacceptable! I want to speak to the manager now.\n" EOC << std::endl;
					break;
			}
		}
	}
}