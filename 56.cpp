#include <iostream>
using namespace std;

int main(){
  string board[5];
  for (int i=0;i<5;i++){
    cin >> board[i];
  }
  int turns = 5;
  string board2[7];
  for (int i = 0; i < 7; i++) {
    for (int j = 0; j < 9; j++) {
      if (i == 0 || i == 6){
        board2[i][j] = ' ';
      } else {
        if (j == 0 || j == 8) {
          board2[i][j] = ' ';
        } else {
          board2[i][j] = board[i-1][j-1];
        }
      }
    }
  }
  int organisms;
  int grimm;
  for (int i=0;i<turns;i++){
    organisms = 0;
    for (int j=1;j<6;j++){
      for (int k=1;k<8;k++){
        grimm = 0;
        if (board2[j][k+1] == 'X' || board2[j][k+1] == 'D') {
          grimm += 1;
        }
        if (board2[j+1][k] == 'X' || board2[j+1][k] == 'D') {
          grimm += 1;
        }
        if (board2[j+1][k+1] == 'X' || board2[j+1][k+1] == 'D') {
          grimm += 1;
        }
        if (board2[j][k-1] == 'X' || board2[j][k-1] == 'D') {
          grimm += 1;
        }
        if (board2[j-1][k] == 'X' || board2[j-1][k] == 'D') {
          grimm += 1;
        }
        if (board2[j-1][k-1] == 'X' || board2[j-1][k-1] == 'D') {
          grimm += 1;
        }
        if (board2[j-1][k+1] == 'X' || board2[j-1][k+1] == 'D') {
          grimm += 1;
        }
        if (board2[j+1][k-1] == 'X' || board2[j+1][k-1] == 'D') {
          grimm += 1;
        }
        if ((grimm < 2 || grimm > 3) && (board2[j][k] == 'X')){
          board2[j][k] = 'D';
        }
        if (board2[j][k] == '-' && grimm == 3){
          board2[j][k] = 'B';
        }
      }
    }
    for (int i=1;i<6;i++){
      for (int j=1;j<8;j++){
        if (board2[i][j] == 'D'){
          board2[i][j] = '-';
        }
        if (board2[i][j] == 'B') {
          board2[i][j] = 'X';
        }
      }
    }
    for (int i=1;i<6;i++){
      for (int j=1;j<8;j++){
        if (board2[i][j] == 'X') {
          organisms += 1;
        }
      }
    }
    cout << organisms << " \n";
    /*cout << "\n";
    for (int i=1;i<6;i++){
      for (int j=1;j<8;j++){
        cout << board2[i][j];
      }
      cout << "\n";
    }
    cout << "\n";*/
  }
}
