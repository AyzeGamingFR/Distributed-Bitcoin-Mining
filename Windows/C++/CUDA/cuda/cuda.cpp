#include <string>

#include "cuda_runtime.h"
#include "device_launch_parameters.h"

#include "sha256/sha256.cpp"

__global__ void hashDatas(string* datas, unsigned int* zn, unsigned int* wtd) {
    
    if (wtd == 0) {
        
        
        
    } else if (wtd == 1) {
        
        
        
    } else if (wtd == 2) {
        
        
        
    } else if (wtd == 3) {
        
        
        
    } else if (wtd == 4) {
        
        
        
    } else if (wtd == 5) {
        
        
        
    } else if (wtd == 6) {
        
        
        
    };
    
};

unsigned int cuda(string inputdatas, unsigned int zerosNeeded, unsigned int workToDo) {
    
    // create the strings pointers in the gpu
    string* datas = inputdatas;
    string* hash = "0000000000000000000000000000000000000000000000000000000000000000";
    unsigned int* zn = zerosNeeded;
    
    // allocate memory in the gpu
    cudaMalloc(&datas, sizeof(datas));
    cudaMalloc(&hash, sizeof(hash));
    cudaMalloc(&zn, sizeof(zn));
    
    // copy the vectors into the gpu
    cudaMemcpy(datas, datas, sizeof(datas), cudaMemcpyHostToDevice);
    cudaMemcpy(hash, hash, sizeof(hash), cudaMemcpyHostToDevice);
    cudaMemcpy(zn, zn, sizeof(zn), cudaMemcpyHostToDevice);
    
    // run the hashing function in the gpu
    hashDatas<<<128, sizeof(datas) / sizeof(unnsigned int)>>>(datas, zerosNeeded, wtd);
    
    // get the work done by the gpu
    cudaMemcpy(endingDatas, hash, sizeof(hash), cuaMemcpyDeviceToHost); // ending point of the datas, source of the datas, size
    
};
