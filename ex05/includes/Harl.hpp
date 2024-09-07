/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvichi <lvichi@student.42porto.com>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/07 17:13:17 by lvichi            #+#    #+#             */
/*   Updated: 2024/09/07 17:13:17 by lvichi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Harl {
    public:
        Harl();
        ~Harl();
        void complain( std::string level );
    private:
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};
