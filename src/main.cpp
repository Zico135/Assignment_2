//==================================================================================================
// Authors : Luke Delmulle and Zico Nederhand
// Group : 15 PPD
// License : LGPL open source license
//
// Brief : Main function, it makes a hardcoded list of packages and calls the print cost function.
//==================================================================================================
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"

int main() {
    //Create some packages
    OvernightPackage* overnightPackage1 = new OvernightPackage("John Doe", "123 Main St", "Jane Smith", "456 Oak Ave", 2.5);
    OvernightPackage* overnightPackage2 = new OvernightPackage("Luke D.", "Somewhere in South Africa", "Zico N.", "the Netherlands", 5.3);
    OvernightPackage* overnightPackage3 = new OvernightPackage("Zico N.", "the Netherlands", "Luke D.", "Somewhere in South Africa", 1.4);

    TwoDayPackage* twoDayPackage1 = new TwoDayPackage("Bob Wilson", "789 Pine Rd", "Alice Brown", "321 Elm St", 1.8);
    TwoDayPackage* twoDayPackage2 = new TwoDayPackage("L. Delmulle", "Waalstraat 174, Enschede", "Z. Nederhand", "Waalstraat 195, Enschede", 4.2);
    TwoDayPackage* twoDayPackage3 = new TwoDayPackage("Z. Nederhand", "Waalstraat 195, Enschede", "L. Delmulle", "Waalstraat 174, Enschede", 34);

    //Create a list of packages
    std::list<Package*> packages;
    //Add the packages to the list (a bit shuffled to make it more interesting)
    packages.push_back(overnightPackage1);
    packages.push_back(overnightPackage2);
    packages.push_back(twoDayPackage1);
    packages.push_back(overnightPackage3);
    packages.push_back(twoDayPackage2);
    packages.push_back(twoDayPackage3);

    //Call the print function to print the cost of each package
    Package::printCost(packages);
    return 0;
}