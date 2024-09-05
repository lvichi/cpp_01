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

#include <iostream>

int main() {
    std::string     str = "HI THIS IS BRAIN";
    std::string*    str_ptr = &str;
    std::string&    str_ref = str;

    std::cout << "Address in memory of the string: " << &str << std::endl;
    std::cout << "Address in memory of the stringPTR: " << &str_ptr << std::endl;
    std::cout << "Address in memory of the stringREF: " << &str_ref << std::endl;

    std::cout << "String: " << str << std::endl;
    std::cout << "StringPTR: " << str_ptr << std::endl;
    std::cout << "StringREF " << str_ref << std::endl;
}
