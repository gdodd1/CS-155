#include <iostream>
#include <fstream>
using namespace std;
int const MAX_ELEMENTS = 1000;
int main(){
    ifstream infile;
    infile.open("input.txt");
    int idArray[MAX_ELEMENTS], size, number, input;
    string nameArray[MAX_ELEMENTS];
    size = sizeof(idArray)/sizeof(idArray[0]);
    bool found = false;
    infile >> ws;
    infile >> nameArray[0] >> idArray[0];
    while(!infile.eof()){
        int i = 1;
        infile >> nameArray[i] >> idArray[i];
    }
    cout << "Please enter the Product ID you're searching for: ";
    cin >> input;
    while(found == false){
        int i;
        if(idArray[i] == input){
            cout << "The name for Product ID " << input << " is " << nameArray[i];
            found = true;
        } else {i++;}
    }
    infile.close();
}