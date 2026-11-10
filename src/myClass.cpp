#include "myClass.h"
#include<iostream>
Myclass::Myclass(int a , int b)
{   
    this->a = a;
    this->b = b;
}
void Myclass::printVars(){
    std::cout << this->a << this->b << std::endl;
}

void Myclass::sayHello()
{
    std::cout << "Hello From MyClass " << std::endl;
}