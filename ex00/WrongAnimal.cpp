/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:27:49 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ) : type( "Animal" ) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const std::string& animal ) : type( animal ) {
    std::cout << "WrongAnimal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal& cp ) {
    *this = cp;
}

WrongAnimal& WrongAnimal::operator=( const WrongAnimal& rhs ) {
    this->type = rhs.type;
    return ( *this );
}

std::string WrongAnimal::getType( void ) const {
    return ( this->type );
}

void    WrongAnimal::makeSound( void ) const {
    std::cout << "*a certain animal sound*" << std::endl;
}
