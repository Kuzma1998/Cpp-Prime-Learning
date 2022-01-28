#include<stdlib.h>
#include<new>
#include<iostream>

void *operator new(size_t size){  // void* 可以转换为任何类型的指针
    if(void *mem = malloc(size)){
        return mem;
    }
    else
        throw std::bad_alloc();
}

void operator delete(void* mem) noexcept {
    free(mem);
}

int main(){
    int* a = new int(0);
    std::cout<<*a<<std::endl;
    delete a;
}