//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Main function, it makes a hardcoded list of packages and calls the print cost function.
//==================================================================================================
#include "inheritance.h"
int main() {
    //make list;
    //call print costs;
    std::list<Package> packages;
    packages.push_back(Package("John Doe", "123 Main St", "Jane Smith", "456 Oak Ave", 2.5));
    packages.push_back(Package("Bob Wilson", "789 Pine Rd", "Alice Brown", "321 Elm St", 1.8));
    
    printCost(packages);
    return 0;
}