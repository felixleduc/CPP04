/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:46:16 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 13:21:49 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal {
  public:
    WrongCat( void );
    WrongCat( const WrongCat& cp );
    ~WrongCat();

    WrongCat& operator=( const WrongCat& rhs );

    void  makeSound( void ) const;
};

#endif
