/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fleduc <fleduc@student.42quebec.com>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 16:44:03 by fleduc            #+#    #+#             */
/*   Updated: 2022/12/01 17:00:56 by fleduc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain {
  protected:
    std::string _ideas[100];
  public:
    Brain( void );
    Brain( const Brain& cp );
    ~Brain();

    Brain& operator=( const Brain& rhs );

    void        setIdeas( std::string thought, int i );
    void        setAllIdeas( std::string thought );
    const std::string& getIdeas( int i ) const;
};

#endif
