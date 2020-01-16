#ifndef SOCKET_X_H
#define SOCKET_X_H
#include<iostram>

class SocketX
{
	private:
		// To store Socket FD
		int socketFD;
	public:
		// To create Socket 
		int createSocket();
};
#endif
