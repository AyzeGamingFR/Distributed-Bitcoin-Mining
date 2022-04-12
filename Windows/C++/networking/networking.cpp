#include <socket>

namespace networking {
    
    unsigned short tcpClient,
                   tcpServer;
    
    unsigned int startTcp(unsigned int sockets, unsigned short serverport) {
        
        if (sockets <= 20) {
            
            for (i < 20, i += 1) {
                
                tcpClient[i + 1] = new socket(AF_INET, SOCK_STREAM, 0);
                
            }
            for (i < 20, i += 1) {
                
                tcpServer[i + 1] = new socket(AF_INET, SOCK_STREAM, 0);
                
            }
            for (i < 20, i += 1) {
                
                bind(tcpServer[i + 1], (sockaddr*) &addr, sizeof(addr));
                
            }
            for (i < 20, i += 1) {
                
                tcpServer[i + 1].listen(serverport);
                
            }
            
        } else if (sockets > 20) {
            
            for (i < sockets, i += 1) {
                
                tcpClient[i + 1] = new socket(AF_INET, SOCK_STREAM, 0);
                
            }
            for (i < sockets, i += 1) {
                
                tcpServer[i + 1] = new socket(AF_INET, SOCK_STREAM, 0);
                
            }
            for (i < sockets, i += 1) {
                
                bind(tcpServer[i + 1], (sockaddr*) &addr, sizeof(addr));
                
            }
            for (i < sockets, i += 1) {
                
                tcpServer[i + 1].listen(serverport);
                
            }
            
        };
        
    };
    
};
