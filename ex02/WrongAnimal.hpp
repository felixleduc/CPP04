/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:44:03 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:24:39 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal {
  protected:
    std::string type;
  public:
    WrongAnimal( void );
    WrongAnimal( const std::string& animal );
    WrongAnimal( const WrongAnimal& cp );
    ~WrongAnimal();

    WrongAnimal& operator=( const WrongAnimal& rhs );

    std::string getType( void ) const;
    void  makeSound( void ) const;
};

#endif
