/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:39:35 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
}

Dog::Dog( const Dog& cp ) {
    *this = cp;
}

Dog& Dog::operator=( const Dog& rhs ) {
    this->type = rhs.type;
    return ( *this );
}

void    Dog::makeSound( void ) const {
    std::cout << "wouf" << std::endl;
}
