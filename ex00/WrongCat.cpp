/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:53:09 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:24:14 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ) : WrongAnimal( "Cat" ) {
    std::cout << "WrongCat constructor called" << std::endl;
}

WrongCat::~WrongCat() {
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat::WrongCat( const WrongCat& cp ) {
    *this = cp;
}

WrongCat& WrongCat::operator=( const WrongCat& rhs ) {
    this->type = rhs.type;
    return ( *this );
}

void    WrongCat::makeSound( void ) const {
    std::cout << "miaow" << std::endl;
}
