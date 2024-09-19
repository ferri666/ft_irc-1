/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ACommand.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpeinado <victor@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/14 19:02:28 by vpeinado          #+#    #+#             */
/*   Updated: 2024/09/19 20:24:03 by vpeinado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ACOMMAND_HPP
#define ACOMMAND_HPP

#include "Server.hpp"

class ACommand
{
    protected:
        //Forma canonica no implementada
        ACommand();
        ACommand(const ACommand &src);
        ACommand &operator=(const ACommand &src);
        Server &_server;
    public:
        ACommand(Server &server);
        virtual ~ACommand();
        virtual void run(std::vector<std::string> args, int fdClient) = 0;             
};

#endif