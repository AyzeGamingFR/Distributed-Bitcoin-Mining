#include <string>

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include "sha256/sha256.cpp"

unsigned int cuda(string inputdatas, zerosNeeded) {
    
    string* datas = inputdatas;
    string* hash = "0000000000000000000000000000000000000000000000000000000000000000";
    
    cudaMalloc(&datas, sizeof(datas));
    cudaMalloc(&hash, sizeof(hash));
    
    cudaMemcpy(datas, datas, sizeof(datas), cudaMemcpyHostToDevice);
    cudaMemcpy(hash, hash, sizeof(hash), cudaMemcpyHostToDevice);
    
    for (hash[0 : zerosNeeded - 1] != "0") {
        
        
        
    }
    
};
