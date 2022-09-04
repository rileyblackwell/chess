#include "chess_pieces.h"
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;


int main() {
    // test_pieces();
    ChessPiece piece(1, 1);
    // Pawn pawn(2);
    
    unordered_map<string, ChessPiece> chess_board = {
         
        {"coord1", piece},
        {"coord2", piece},
        {"coord3", piece}
    };
    
    ChessPiece word = chess_board["test"];
    Position pos = word.get_position();
    cout << pos.get_x();
    
    // Position pos = white_pawn.get_position();
    // cout << pos.get_x();
    
    
    // Pawn pawn(2);
    // Bishop bishop(1);
    // test_vec.push_back(pawn);
    // test_vec.push_back(bishop);
    // cout << test_vec[0]<< endl << test_vec[1];

    return 0;
}