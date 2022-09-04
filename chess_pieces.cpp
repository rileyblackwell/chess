#include "chess_pieces.h"
#include <iostream>
#include <cassert>

using namespace std;


Position::Position() {
    x = 0;
    y = 0;
}
    
Position::Position(int x_start, int y_start) {
    x = x_start;
    y = y_start;
} 
    
int Position::get_x() const {return x;}
    
int Position::get_y() const {return y;}

// REQUIRES: move_x >= 0 && move_y >= 0
void Position::move(int move_x, int move_y) {
    assert(move_x >= 0 && move_y >= 0);
    x += move_x;
    y += move_y;
}

ChessPiece::ChessPiece(int x, int y) : pos(x, y) {}

int ChessPiece::get_x_pos() const {return pos.get_x();}

int ChessPiece::get_y_pos() const {return pos.get_y();}

class Pawn: public ChessPiece{
    public:
        Pawn(int x, int y) : ChessPiece(x, y) {}
        
        const string & get_name() const override {return name;}
        
        // Pawn(int x): ChessPiece(x, 1){
        //     name = "Pawn";
        //     symbol = "p"; 
        //     start_move = true; 
        //     starting_movement = 2;   
        // }

        // Pawn(int x, int y): ChessPiece(x, y){
        //     name = "Pawn";
        //     start_move = true; 
        // }

        // void starting_move(){
        //     if (start_move){
        //         pos.move(0, starting_movement);
        //         start_move = false;
        //     }else{
        //         cout << "starting move already used" << endl;
        //     }   
        // }

        // void normal_move(){
        //     pos.move(0, movement);
        // }

        // void capture_move_right(){
        //     pos.move(1, movement);
        // }

        // void capture_move_left(){
        //     pos.move(-1, movement);
        // }  
    
    private:
        bool start_move;
        int starting_movement;
        int movement; 
        string name;   
};



