/*
** EPITECH PROJECT, 2018
** plazza
** File description:
** IntSocket
*/

#include "IntSocket.hpp"

int	IntSocket::intSocket(int domain, int type, int protocole)
{
	return socket(domain, type, protocole);
}

int	IntSocket::intBind(int sockfd, const struct sockaddr *addr, socklen_t addrlen)
{
	return bind(sockfd, addr, addrlen);
}

int	IntSocket::intListen(int sockfd, int backlog)
{
	return listen(sockfd, backlog);
}

int	IntSocket::intClose(int fd)
{
	return close(fd);
}

int	IntSocket::intConnect(int fd, const struct sockaddr *addr, socklen_t addrlen)
{
	return connect(fd, addr, addrlen);
}

int	IntSocket::intAccept(int fd, struct sockaddr *addr, socklen_t *addrlen)
{
	return accept(fd, addr, addrlen);
}

ssize_t	IntSocket::intSend(int sockfd, const void *buf, size_t len, int flags)
{
	return send(sockfd, buf, len, flags);
}

ssize_t	IntSocket::intRecv(int sockfd, void *buf, size_t len, int flags)
{
	return recv(sockfd, buf, len, flags);
}

