/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:51:06 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:01:05 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ) {
    std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain( const Brain& cp ) {
    *this = cp;
}

Brain& Brain::operator=( const Brain& rhs ) {
    for ( int i = 0; i < 100; i++ )
        this->_ideas[i] = rhs._ideas[i];
    return ( *this );
}

void    Brain::setIdeas( std::string thought, int i ) {
    if ( i < 100 && i > -1 )
        this->_ideas[i] = thought;
}

void    Brain::setAllIdeas( std::string thought ) {
    for ( int i = 0; i < 100; i++ )
        this->_ideas[i] = thought;
}

const std::string& Brain::getIdeas( int i ) const {
    if ( i < 100 && i > -1 )
        return ( this->_ideas[i] );
    return ( NULL );
}
