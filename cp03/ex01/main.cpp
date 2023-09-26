/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aramon <aramon@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:34:20 by aramon            #+#    #+#             */
/*   Updated: 2023/09/26 18:57:47 by aramon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main( void )
{
    ScavTrap st1( "Ash" );
    ScavTrap st2( st1 );

    st2.attack( "the air" );
    st2.takeDamage( 10 );
    st2.beRepaired( 10 );
    st2.guardGate();

    return (0);
}
