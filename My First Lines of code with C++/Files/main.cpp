#include <iostream>
#include <fstream> // Include for Working with Files
using namespace std;

int main()
{
    ofstream SharppyFiles; // Creating A file Object OFstream
    SharppyFiles.open("SomeWhere"); // Associate With File Object like Define where to save - @pram - SomeWhere < point to this file
    SharppyFiles << "Congrats You complete First Leason of Files" << endl; // this is not going to Cout to the Screen , Its about saving Files in you'r Computer
    SharppyFiles.close(); // Close the File to free the memory

}
