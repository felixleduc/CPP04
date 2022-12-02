/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:16 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:17:05 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal {
  private:
    Brain *_brain;
  public:
    Dog( void );
    Dog( const Dog& cp );
    ~Dog();

    Dog& operator=( const Dog& rhs );

    void  makeSound( void ) const;
    Brain&  getBrain( void ) const;
};

#endif
