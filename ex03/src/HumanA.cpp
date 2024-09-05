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

#include "HumanA.hpp"

HumanA::HumanA( Weapon& weapon ) : _weapon(weapon) {
    this->_name = "John Doe";
}

HumanA::~HumanA() {
}

void HumanA::attack() {
    std::cout << this->_name << " attacks with his ";
    if (this->_weapon.getType() == "")
        std::cout << "bare hands" << std::endl;
    else
        std::cout << this->_weapon.getType() << std::endl;
}

void HumanA::setName( std::string name ) {
    this->_name = name;
}

void HumanA::setWeapon( Weapon& weapon ) {
    this->_weapon = weapon;
}
