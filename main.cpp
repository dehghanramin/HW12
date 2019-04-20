    #include <iostream>
    #include "CReferee.hpp"
    using namespace std;

    
    int main(int argc, char const *argv[])
    {
       CReferee firstRef;

       cout << "The default information of the first ref: \n";

       cout << firstRef;

       cin >> firstRef;

       cout<< "The inputted information of the first ref: \n";

       cout << firstRef;

       cout<< "Modifying the grade to NATIONAL. \n";

       firstRef.setGrade(4.0);

       cout<< "The referee grade is now: " << firstRef.getGrade()<< endl;

 

       CReferee secondRef ("R0002", "Arby", "Sample", CLUB);

       cout<< "The initial information of the second ref: \n";

       cout << secondRef;

       cout<< "Modifying the grade to STATE. \n";

       secondRef.setGrade (3.25);

       cout<< "The modified grade is now: " << secondRef.getGrade ()<< endl;

       cout<< "The updated information of the second ref: \n";

       cout << secondRef;
        return 0;
    }