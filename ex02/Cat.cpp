/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:36:26 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat" ) {
    this->_brain = new Brain();
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
    delete  this->_brain;
}

Cat::Cat( const Cat& cp ) {
    *this = cp;
}

Cat& Cat::operator=( const Cat& rhs ) {
    this->type = rhs.type;
    if ( this->_brain != NULL )
        delete  this->_brain;
    this->_brain = new Brain();
    *( this->_brain ) = *( rhs._brain );
    return ( *this );
}

void    Cat::makeSound( void ) const {
    std::cout << "miaow" << std::endl;
}

Brain&  Cat::getBrain( void ) const {
    return ( *( this->_brain ) );
}