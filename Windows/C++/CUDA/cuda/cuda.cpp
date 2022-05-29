#include <string>

#include "cuda_runtime.h"
#include "cuda_runtime_api.h"
#include "device_launch_parameters.h"

string* parameters = ["cuda_cores": getCoresCount, "hashing_algorithm": "sha256"];

unsigned int getCoresCount() {
    
    switch(devProp.major) {
        
        case 2: // Fermi GPU Architecture
            
            if (devProp.minor == 1) {
                
                return (devProp.multiProcessorCount * 48)
                
            } else {
                
                return (devProp.multiProcessorCount * 32)
                
            }
        case 3: // Kepler GPU Architecture
            
            return (devProp.multiProcessorCount * 192)
            
            
        case 5: // Maxwell GPU Architecture
            
            return (devProp.multiProcessorCount * 128)
            
            
        case 6: // Pascal GPU Architecture
            
            if (devProp.minor == 0) {
                
                return (devProp.multiProcessorCount * 64)
                
            };
            if (devProp.minor == 1 || devProp.minor == 2) {
                
                return (devProp.multiProcessorCount * 128)
                
            };
            
        case 7: // Volta and Turing GPU Architectures
            
            if (devProp.minor == 0 || devProp.minor == 5) {
                
                return (devProp.multiProcessorCount * 64)
                
            };
            
        case 8:
            
            if (devProp.minor == 0) {
                
                return (devProp.multiProcessorCount * 64)
                
            };
            if (devProp.minor == 6) {
                
                return (devProp.multiProcessorCount * 128)
                
            };
            
    };
    
};

__global__ void hashDatas(string* datas, unsigned int* zn, string* hashing_algorithm) {
    
    if (hashing_algorithm == "argon2") {
        
        string* hash;
        for (hash[0 : zn - 1] != "0") {
            
            argon2.hash(datas);
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "c11") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "scrypt") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "sha256") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "sha512") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "sonoa") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "x11") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "x12") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "x16") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "x16r") {
        
        string* hash;
        return (hash)
        
    };
    if (hashing_algorithm == "x16s") {
        
        string* hash;
        return (hash)
        
    };
    
};

unsigned int cuda(string inputdatas, unsigned int zeros_needed) {
    
    // create the strings pointers in the gpu
    string* datas = inputdatas;
    string* hash = "0000000000000000000000000000000000000000000000000000000000000000";
    unsigned int* zn = zeros_needed;
    
    // allocate memory in the gpu
    cudaMalloc(&datas, sizeof(datas));
    cudaMalloc(&hash, sizeof(hash));
    cudaMalloc(&zn, sizeof(zn));
    
    // copy the vectors into the gpu
    cudaMemcpy(datas, datas, sizeof(datas), cudaMemcpyHostToDevice);
    cudaMemcpy(hash, hash, sizeof(hash), cudaMemcpyHostToDevice);
    cudaMemcpy(zn, zn, sizeof(zn), cudaMemcpyHostToDevice);
    
    // run the hashing function in the gpu
    hashDatas<<<parameters["cuda_cores"], sizeof(datas) / sizeof(unsigned int)>>>(datas, zerosNeeded, parameters["hashing_algorithm"]); // hash the datas using the gpu using the amount of cuda cores of the gpu, with the size of the datas
    
    // get the work done by the gpu
    cudaMemcpy(endingDatas, hash, sizeof(hash), cudaMemcpyDeviceToHost); // ending point of the datas, source of the datas, size, from gpu to cpu to ram
    
};
