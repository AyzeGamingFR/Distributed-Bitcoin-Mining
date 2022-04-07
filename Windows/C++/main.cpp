#include <fstream>
#include <iostream>
#include <std>
#include <string>
#include "windows.h"

#include "config/config.cpp"
#include "encryption/encryption.cpp"
#include "gui/gui.cpp"
#include "networking/networking.cpp"
#include "sha256/sha256.cpp"
#include "threading/threading.cpp"

string works = [];

namespace main {
    
    unsigned int start() {
        
        networking.start(config.servers);
        threading.start();
        
    };
    
};

main.start();
