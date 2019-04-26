#ifndef SOCKET_X_H
#define SOCKET_X_H
#include<iostram>

class SocketX
{
	private:
		int socketFD;
	public:
		int createSocket();
};
#endif
