/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:16 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 12:35:28 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"

class Dog : public Animal {
  public:
    Dog( void );
    Dog( const Dog& cp );
    ~Dog();

    Dog& operator=( const Dog& rhs );

    void  makeSound( void ) const;
};

#endif
