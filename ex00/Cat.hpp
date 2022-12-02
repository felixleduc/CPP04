/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:16 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 12:35:40 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal {
  public:
    Cat( void );
    Cat( const Cat& cp );
    ~Cat();

    Cat& operator=( const Cat& rhs );

    void  makeSound( void ) const;
};

#endif
