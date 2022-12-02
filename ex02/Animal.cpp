/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:28:59 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ) : type( "Animal" ) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal( const std::string& animal ) : type( animal ) {
    std::cout << "Animal constructor called" << std::endl;
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal( const Animal& cp ) {
    *this = cp;
}

Animal& Animal::operator=( const Animal& rhs ) {
    this->type = rhs.type;
    return ( *this );
}

std::string Animal::getType( void ) const {
    return ( this->type );
}
