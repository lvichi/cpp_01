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

#include "Zombie.hpp"

Zombie* zombieHorde( int qtd, std::string name );

int main() {
    int         qtd     = 5;
    std::string name    = "José";

    std::cout   << "Creating a horde of "
                << qtd
                << " zombies named "
                << "'" << name << "':"
                << std::endl;

    Zombie* horde = zombieHorde(qtd, name);

    for(int i = 0; i < qtd; i++) {
        horde[i].announce();
    }

    delete[] horde;
}
