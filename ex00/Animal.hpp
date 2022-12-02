/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:44:03 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 12:36:36 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal {
  protected:
    std::string type;
  public:
    Animal( void );
    Animal( const std::string& animal );
    Animal( const Animal& cp );
    virtual ~Animal();

    Animal& operator=( const Animal& rhs );

    std::string getType( void ) const;
    virtual void  makeSound( void ) const;
};

#endif
