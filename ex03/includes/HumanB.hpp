/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 16:53:38 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/05 16:53:38 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Weapon.hpp"

class HumanB {
    public:
        HumanB();
        ~HumanB();
        void        attack();
        void        setName(std::string name);
        void        setWeapon(Weapon* weapon);
    private:
        Weapon*         _weapon;
        std::string     _name;
};
