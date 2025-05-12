/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 14:19:11 by rothiery          #+#    #+#             */
/*   Updated: 2025/05/05 15:29:02 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string &name)
	:	_name(name)
{}

void	HumanB::setWeapon(Weapon &type)
{
	_weapon = &type;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with their " << (*_weapon).getType() << std::endl;
}
