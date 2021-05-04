#include<iostream>
using namespace std;

void printboard(int **board, int x, int y){

    for(int i=x ; i<x ; i++){
        for(int j=y ; j<y ; j++){
            
            board[i][j]= 1;
            cout << board[i][j];

        }
        cout<<"\n";
    }
}
void makeboard(int x,int y){
    int **board;
    board = new int*[x];

        for(int i=0 ; i<x ; i++){
            board[i] = new int[y];

        }

        printboard(board,x,y);


}