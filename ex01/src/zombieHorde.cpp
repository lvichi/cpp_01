/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/31 16:58:53 by lvichi            #+#    #+#             */
/*   Updated: 2024/08/31 16:58:53 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int qtd, std::string name ) {
    Zombie* zombies = new Zombie[qtd];

    for (int i = 0; i < qtd; i++) {
        zombies[i].setName(name);
    }

    return zombies;
}
