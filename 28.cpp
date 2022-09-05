#include <iostream>
using namespace std;
const int MAX_SCORES = 1000;
void getScores (int id[], int exam[], int &num);
void showTopScores (const int id[], const int exam[], int num);

int main()
{
  int num, id[MAX_SCORES], exam[MAX_SCORES];
  getScores (id,exam,num);
  showTopScores (id,exam,num);
 return 0;
}
void getScores(int id[], int exam[], int &num){
  cout << "How many scores will there be? " << endl;
  cin >> num;
  for(int i = 0; i < num; i++){
    cout << "Enter Student ID: ";
    cin >> id[i];
    cout << endl << "Enter Exam Score: ";
    cin >> exam[i];
  }
}
void showTopScores(const int id[], const int exam[], int num){
    int mean, sum, highList[MAX_SCORES], z;
    for (int i = 0; i < num; i++){
        sum += exam[i];
    }
    mean = sum/num;
    cout << "The mean is: " << mean << endl;
    for(int i = 0; i < num; i++){
      if(exam[i] > mean){
          highList[z] = exam[i];
          z++;
      }
    }
    cout << "Scores above the average are: ";
    for (int i = 0; i < num; i++){
      cout << highList[i] << ", ";
    }
    
}