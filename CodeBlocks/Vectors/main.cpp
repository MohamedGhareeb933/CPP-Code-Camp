#include <iostream>
#include <vector>

int main()
{
    // Format: vector <Data Type> Name_of_Vector
    // Name_of_Vector.Push_Back(Value)- adds an Element to the End of the Vector - Also Resize it
    // Name_of_Vector.at(Value) - return Element at Specific index Number
    // Name_of_Vector.size() - return an unsigned int(Positive Only) equal to the number of Element
    // Name_of_vector.begin() - Add Element to The First Element
    // Name_of Vector.insert(Name_of_Vector.Begin() Search Index+ , add New Value) - adds Element BEFORE specified index Number
    // Name_of_Vector.erase(Name_of_Vector.begin() Search Index+) - removes Element from Specified number
    // Name_of_Vector.clear() - removes ALL Element in Vector
    // Name_of_Vector.empty() - Returns boolean Value if whether vector is Empty

    std::vector <int> Value;

    Value.push_back(5);
    Value.push_back(11);
    Value.push_back(9);
    Value.push_back(19);
    Value.push_back(27);

    std::cout << "Vector: " << Value.at(0) << std::endl;

    std::cout << "\nVector: ";
    for(unsigned int x = 0; x < Value.size(); x++) {
        std::cout << Value[x] << " ";
    }

    Value.insert(Value.begin() +2, 88);
    std::cout << "\n\nVector: ";
    for(unsigned int x = 0; x < Value.size(); x++) {
        std::cout << Value[x] << " ";
    }

    Value.erase(Value.begin() + 4);
    std::cout << "\n\nVector: ";
    for(unsigned int x = 0; x < Value.size(); x++) {
        std::cout << Value[x] << " ";
    }
     std::cout << std::endl;
     std::cout << std::endl;

    if(Value.empty()) {
        std::cout << "It's Empty" << std::endl;
    }
        else {
            std::cout << "It's Not Empty " << std::endl;
        }

    Value.clear(); // ALL Vector Element Removed
    if(Value.empty()) {
        std::cout << "It's Empty" << std::endl;
    }
        else {
            std::cout << "It's Not Empty " << std::endl;
        }

   std::cout << std::endl;
}
