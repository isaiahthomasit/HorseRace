#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main(){
  int horses[5] = {0}; 
  bool winner = false; 
  
  srand(time(NULL));
  
  while (winner == false){

    // advance()
    for (int i = 0; i < 5; i++){
      advance(i, horses);
    }

    // printLane()
    for (int i = 0; i < 5; i++){
      printLane(i, horses);
    } 
    
    // isWinner()
    for (int = 0; i < 5; i++){
      if (isWinner(i, horses)){
        cout << "Horse " << i << " WINS!!!" << endl;
	winner = true;
      }
    }

    if (winner == false){
      cout << "Press enter to continue" << endl;
      cin.get()
    }
  
  }
  
  return 0;
}


void advance(int horseNum, int* horses){
  int coin = rand() % 2;

  if (coin == 0){
    horses[horseNum]++;
  }
}


void printLane(int horseNum, int* horses){
  for (int position = 0; position < 15; position++){
    if (position == horses[horseNum]){
      cout << horseNum;
    }
    else{
      cout << ".";
    }
  }

  cout << endl;
}


bool isWinner(int horseNum, int* horses){
  if (horses[horseNum] == 14){
    return true;
  }
  else{
    return false;
  }
}
