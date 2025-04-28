/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rothiery <rothiery@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:53:11 by rothiery          #+#    #+#             */
/*   Updated: 2025/04/28 14:26:47 by rothiery         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include "iostream"

Zombie	*newZombie(std::string name);
void 	randomChump(std::string name);

class Zombie
{
	public:
		void	annonce();
		Zombie();
		~Zombie();

	private:
		std::string		name;
};

#endif
