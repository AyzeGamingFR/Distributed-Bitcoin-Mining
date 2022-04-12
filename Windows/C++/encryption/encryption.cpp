#include "../sha256/sha256.cpp"

unsigned int encrypt(string password, unsigned int datasTurnage, string datas) {
    
    datas.insert(0, "{'datas': '");
    datas.append("'}");
    password = sha256(password);
    for (i < datasTurnage, i += 1) {
        
        datas = atoi(stoi(datas) * stoi(password));
        
    }
    return (datas)
    
};
unsigned int decrypt(string password, unsigned int datasTurnage, string datas) {
    
    for (i < datasTurnage, i += 1) {
        
        datas = atoi(stoi(datas) / stoi(password));
        
    }
    return (datas)
    
};
unsigned int bruteforce(string datas) {
    
    for (datas[0 : 10] != "{'datas': '") {
        
        datas = atoi(stoi(datas) - 1);
        
    };
    
};
