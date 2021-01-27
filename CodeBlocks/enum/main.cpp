#include <iostream>
using namespace std;

enum Animals{FISH, SHEEP, HORSE, CAT};
Animals PetList(); // Enum function.



int main() {


    Animals A1, A2;
/*
    A1 = SHEEP;
    cout << A1 << endl;
    A1 = static_cast<Animals>(A1 + 1); // Force It, <Animals> is the data type
    cout << A1 << endl;
*/

  for(A1 = FISH; A1 <= CAT; A1= static_cast<Animals>(A1 + 1) ) { //Example of using STATIC CAST in for loop, CANT A1++
        cout << A1 << endl;
   }


  //PetList();
}

Animals PetList() {
  char Select;
  cout << "1:Fish \n2:Sheep \n3:Horse \n4:Cat\n" << endl;
  cin >> Select;
  switch(Select) {
    case 'F':  case 'f':
             cout << "you'v Choose Fish , GZZZ" << endl;
                break;

    case 'S':  case 's':
                cout << "you'v Choose Sheep, GZZZ" << endl;
                break;

    case 'H': case 'h':
                 cout << "you'v Choose Horse, GZZZ" << endl;
                break;

    case 'C': case 'c':
                 cout << "you'v Choose Cat, GZZZ" << endl;
                break;

   default:
             cout << "Selection Not founds " << endl;
  }

}
