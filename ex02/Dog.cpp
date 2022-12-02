/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:36:45 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ) : Animal( "Dog" ) {
    this->_brain = new  Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::~Dog() {
    std::cout << "Dog destructor called" << std::endl;
    delete  this->_brain;
}

Dog::Dog( const Dog& cp ) {
    *this = cp;
}

Dog& Dog::operator=( const Dog& rhs ) {
    this->type = rhs.type;
    if ( this->_brain != NULL )
        delete  this->_brain;
    this->_brain = new  Brain();
    *( this->_brain ) = *( rhs._brain );
    return ( *this );
}

void    Dog::makeSound( void ) const {
    std::cout << "wouf" << std::endl;
}

Brain&  Dog::getBrain( void ) const {
    return ( *( this->_brain ) );
}
