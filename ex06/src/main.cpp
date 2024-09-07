/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:39:11 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/07 17:39:11 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv ) {
    if (argc == 1) {
        std::cerr << "Usage: ./harlFilter [debug/info/warning/error]" << std::endl;
        return 1;
    }

    Harl basic_harl;
    basic_harl.complain(argv[1]);
    return 0;
}
