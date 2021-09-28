#include <iostream>

using namespace std;

int main() {
    try{
        int MomsAge = 30;
        int SonsAge = 30;

        if(SonsAge >= MomsAge) {
            throw 1050;
            }

        }catch (int x) { // catch (...)
            cout << "Error: " << x << endl;
            }
}
