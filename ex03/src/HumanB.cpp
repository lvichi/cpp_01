/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:16:27 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/05 17:16:27 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:11:23 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/05 17:11:23 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB() {
    this->_name = "John Doe";
    this->_weapon = NULL;
}

HumanB::~HumanB() {
}

void HumanB::attack() {
    std::cout << this->_name << " attacks with his ";
    if (this->_weapon == NULL || this->_weapon->getType() == "")
        std::cout << "bare hands" << std::endl;
    else
        std::cout << this->_weapon->getType() << std::endl;
}

void HumanB::setName( std::string name ) {
    this->_name = name;
}

void HumanB::setWeapon( Weapon* weapon ) {
    this->_weapon = weapon;
}
