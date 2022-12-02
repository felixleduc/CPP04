/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:16 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:02:02 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal {
  private:
    Brain *_brain;
  public:
    Cat( void );
    Cat( const Cat& cp );
    ~Cat();

    Cat& operator=( const Cat& rhs );

    void  makeSound( void ) const;
    Brain&  getBrain( void ) const;
};

#endif
