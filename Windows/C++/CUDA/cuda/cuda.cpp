#include <string>

#include "cuda_runtime.h"
#include "cuda_runtime_api.h"
#include "device_launch_parameters.h"

string* parameters = ["cuda_cores": devProp.multiProcessorCount, "hashing_algorithm": "sha256"];

__global__ unsigned int argon2(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int bmw224(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int bmw384(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int c11(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int cubehash(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int scrypt(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int sha256(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int sha512(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int sonoa(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int x11(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int x12(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int x16(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int x16s(string* datas) {
    
    string* result;
    
    return (result)
    
};
__global__ unsigned int x16r(string* datas) {
    
    string* result;
    
    return (result)
    
};

__global__ unsigned int hashDatas(string* datas, unsigned int* zn, string* hashing_algorithm) {
    
    string* hash;
    
    if (hashing_algorithm == "argon2") {
        
        hash = argon2(datas + str(nonce));
        
    };
    if (hashing_algorithm == "bmw224" || hashing_algorithm == "bmw256") {
        
        hash = bmw224(datas + str(nonce));
        
    };
    if (hashing_algorithm == "bmw384" || hashing_algorithm == "bmw512") {
        
       for (hash[0 : zn - 1] != "0") {
           
           hash = bmw384(datas + str(nonce));
           
       };
        
    };
    if (hashing_algorithm == "c11") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = c11(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "cubehash") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = cubehash(datas + str(nonce));
            
        };
        
    };
    if (hashing_algorithm == "scrypt") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = scrypt(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "sha256") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = sha256(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "sha512") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = sha512(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "sonoa") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = sonoa(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "x11") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = x11(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "x12") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = x12(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "x16") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = x16(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "x16r") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = x16r(datas + str(nonce));
            
        };
        return (hash)
        
    };
    if (hashing_algorithm == "x16s") {
        
        for (hash[0 : zn - 1] != "0") {
            
            hash = x16s(datas + str(nonce));
            
        };
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
