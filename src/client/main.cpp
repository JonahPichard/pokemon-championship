#include <iostream>
#include "client.hpp"

using namespace client;

int main(int argc,char* argv[])
{
    Effect test = Effect();
    test.setOperator(0);
    test.setTarget(false);
    test.setValue(30.f);
    std::cout << test.getFormattedStats();
    std::cout << test.jsonExport() << std::endl;
    return 0;
}