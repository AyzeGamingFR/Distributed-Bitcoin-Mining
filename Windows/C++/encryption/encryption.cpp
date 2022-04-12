#include "../sha256/sha256.cpp"

namespace encrypt {
    
    unsigned int encryptDatas(string password, unsigned int datasTurnage, string datas) {
        
        password = sha256(password);
        for (i < datasTurnage, i += 1) {
            
            datas = atoi(stoi(datas) * stoi(password));
            
        }
        return (datas)
        
    };
    
};
