/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:15:34 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/07 17:15:34 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {
};

Harl::~Harl() {
};

void	Harl::complain( std::string level )
{
    for (unsigned long i = 0; i < level.size(); i++)
        level[i] = toupper(level[i]);

    void	(Harl::*functionList[4])() ={
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };

    std::string levels[] = {
            "DEBUG",
            "INFO",
            "WARNING",
            "ERROR"
    };

    int i;
    for (i = 0; i < 4; i++)
        if (levels[i] == level)
            break;

    switch (i) {
        case 0:
            (this->*functionList[0])();
        case 1:
            (this->*functionList[1])();
        case 2:
            (this->*functionList[2])();
        case 3:
            (this->*functionList[3])();
            return;
    }

    std::cout << "[ Probably complaining about insignificant problems ]"
              << std::endl;
};

void Harl::debug( void ){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple"
              << "-pickle-special-ketchup burger. I really do!"
              << std::endl;
};

void Harl::info( void ) {
    std::cout << "I cannot believe adding extra bacon costs more money. "
              << "You didn’t put enough bacon in my burger! If you did, "
              << "I wouldn’t be asking for more!"
              << std::endl;
};

void Harl::warning( void ) {
    std::cout << "I think I deserve to have some extra bacon for free. "
              << "I’ve been coming for years whereas you started working "
              << "here since last month."
              << std::endl;
};

void Harl::error( void ) {
    std::cout << "This is unacceptable. I want to speak to the manager now."
              << std::endl;
};
