/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:57:01 by lvichi            #+#    #+#             */
/*   Updated: 2024/08/31 16:57:01 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main() {
    std::cout << "Creating a knife." << std::endl;
    Weapon knife = Weapon();
    knife.setType("knife");

    std::cout << "Creating a HumanA with a knife." << std::endl;
    HumanA jose = HumanA(knife);
    jose.setName("Jose");

    std::cout << "Creating a HumanB." << std::endl;
    HumanB pedro = HumanB();
    pedro.setName("Pedro");

    std::cout << "Fight!" << std::endl;
    jose.attack();
    pedro.attack();

    std::cout << "Pedro gets a gun:" << std::endl;
    Weapon gun = Weapon();
    gun.setType("gun");
    pedro.setWeapon(&gun);

    std::cout << "Fight!" << std::endl;
    jose.attack();
    pedro.attack();

    return 0;
}
