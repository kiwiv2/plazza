/*
** EPITECH PROJECT, 2018
** plazza
** File description:
** main
*/

#include <stdlib.h>
#include <time.h>
#include <signal.h>
#include <unistd.h>
#include "Master.hpp"
#include "Cli.hpp"
#include <iostream>

static void	ctrl_c(int)
{
	serv_g._status = -1;
	if (serv_g._pid > 0) {
		if (serv_g._server >= 0)
			close(serv_g._server);
	} else if (serv_g._pid == 0 && serv_g._client >= 0)
		close(serv_g._client);
	exit(0);
}

int	main(int ac, char **av)
{
	int	nbThreads = 0;

	serv_g._server = -1;
	serv_g._client = -1;
	serv_g._status = 0;
	serv_g._pid = 1;
	signal(SIGINT, ctrl_c);
	srand(time(NULL));
	if (ac != 2)
		return 84;
	nbThreads = atoi(av[1]);
	if (nbThreads <= 0)
		return 84;
	Master	master(nbThreads);
	master.exec();
	return 0;
}