#include <iostream>
#include <cstdlib> // clear man hinh

using namespace std;

void initBoard(char board[5][5]);
void drawBoard(char board[5][5]);
void playerMove(char board[5][5], char player, int& row, int& col);
bool checkWin(char board[5][5], char player);

int main() {
    char board[5][5];
    char currUser = 'X';
    int row, col;
    int moves = 0; // check hoa co max = 25

    initBoard(board);

    while(true){
        drawBoard(board);

        playerMove(board, currUser, row, col);
        moves++;

        if(checkWin(board, currUser)){
            cout << "Nguoi thang cuoc la " << currUser << "!!!!!!" << endl;
        }

        if(moves == 25){
            drawBoard(board);
            cout << "Tran dau hoa khong co ai THANG." << endl;
            break;
        }

        if (currUser == 'X'){
            currUser = '0';
        } else {
            currUser = 'X';
        }
    }

    return 0;
}

// ve ban co
void initBoard(char board[5][5]){
    for(int row = 0; row < 5; row++){
        for (int col = 0; col < 5; col++){
            board[row][col] = ' ';
        }
    }
}

// ve X | O
void drawBoard(char board[5][5]){
    system("cls");
    cout << "   0   1   2   3   4 \n";
    for (int i = 0; i < 5; i++) {
        cout << i << " ";
        for (int j = 0; j< 5; j++){
            cout << " " << board[i][j] << " ";
            if ( j < 4) cout << "|";
        }
        cout << "\n";
        if ( i < 4) cout << " --------------------- \n";
    }
}


// ng choi danh co | luu vet danh co. player (X 0)
void playerMove(char board[5][5], char player, int& row, int& col){
    while (true) {
        cout << "nguoi choi" << player << " nhap toa do dong: < 5";
        cin >> row;
        cout << "nguoi choi" << player << " nhap toa do cot: < 5";
        cin >> col;
        if (row >= 0 && row < 5 && col >= 0 && col < 5 && board[row][col] == ' '){
            board[row][col] = player;
            break;
        }else{
            cout << "vi tri khong hop le";
        }
    }
}


// kiem tra chien thang
bool checkWin(char board[5][5], char player){

    return false;
}