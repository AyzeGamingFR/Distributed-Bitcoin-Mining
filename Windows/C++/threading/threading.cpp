#include <iostream>
#include <string>
#include <thread>
#include <windows.h>

namespace threading {
    
    unsigned int threads = 0;
    
    void createThread(void work) {
        
        string threadname = thread + threads;
        
        std::thread threadname (work);
        
    };
    
};
