/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:01:17 by rothiery          #+#    #+#             */
/*   Updated: 2025/04/28 14:24:20 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::annonce()
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie	*newZombie(std::string name)
{
	Zombie	*ret;

	ret = new(Zombie);
	ret->name = name;
	return (ret);
}

void	randomChump(std::string name)
{
	Zombie	temp;

	temp.name = name;
	temp.annonce();
}

Zombie::~Zombie()
{
	annonce();
}
