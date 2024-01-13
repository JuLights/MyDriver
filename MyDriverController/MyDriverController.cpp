
#include <iostream>
#include "kernelinterface.hpp"

int main()
{
    KernelInterface Driver = KernelInterface("\\\\.\\mydriver");

    ULONG address = Driver.GetClientAddress();

    std::cout << " ezpz cs2 client.dll address:  " << address << std::endl;

    while (true) 
    {
        //..
    }

    std::cout << "Hello World!\n";
}
