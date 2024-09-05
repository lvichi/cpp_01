/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 17:03:20 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/05 17:03:20 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon() {
    this->_type = "";
}

Weapon::~Weapon() {
}

std::string Weapon::getType() {
    return this->_type;
}

void Weapon::setType(std::string type) {
    this->_type = type;
}
