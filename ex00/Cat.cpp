/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 12:37:40 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ) : Animal( "Cat") {
    std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat() {
    std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat( const Cat& cp ) {
    *this = cp;
}

Cat& Cat::operator=( const Cat& rhs ) {
    this->type = rhs.type;
    return ( *this );
}

void    Cat::makeSound( void ) const {
    std::cout << "miaow" << std::endl;
}
