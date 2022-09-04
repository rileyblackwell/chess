#include <string>


class Position {
    public:
        Position();

        Position(int x_start, int y_start);
        
        int get_x() const;
        
        int get_y() const;
         
        void move(int move_x, int move_y);
    
    private:
        int x;
        int y;    
};

class ChessPiece {   
    public:
        ChessPiece();

        ChessPiece(int x, int y);

        int get_x_pos() const;

        int get_y_pos() const;

        virtual const string & get_name() const = 0;

    protected:
        Position pos;
       
};

  

// class BlackPawn: public Pawn{
//     public:
//         BlackPawn(int x): Pawn(x, 6){
//             symbol = "P";
//             movement = -1; 
//             starting_movement = -2;     
//         }                       
// };

// class Rook: public ChessPiece{
//     public:
//         Rook(int x): ChessPiece(x, 0){
//             name = "Rook";
//             symbol = "r";
//         }

//         Rook(int x, int y): ChessPiece(x, y){
//             name = "Rook";
//         }

//         void move_horz(int move_x){
//             /* Moves a rook to the right if move_x is pos and moves to the left if move_x is negative. 
            
//             */
//             pos.move(move_x, 0);
//         }
        
//         void move_vert(int move_y){
//             /* Moves a rook forward on the chess board if pos and moves a rook backwards if negative.
            
//             */
//             move_y *= movement;
//             pos.move(0, move_y);
//         }     
// };

// class BlackRook: public Rook{
//     public:
//         BlackRook(int x): Rook(x, 7){
//             symbol = "R";
//             movement = -1;
//         }
// };

// class Knight: public ChessPiece{
//     public:
//         Knight(int x): ChessPiece(x, 0) {
//             name = "Knight";
//             symbol = "k";
//         }

//         Knight(int x, int y): ChessPiece(x, y) {
//             name = "Knight";
//         }

//         void long_right(bool direction){
//             if (direction){
//                 pos.move(1, 2 * movement);
//             }else{
//                 pos.move(1, -2 * movement);    
//             }
//         }

//         void short_right(bool direction){
//             if (direction){
//                 pos.move(2, movement);
//             }else{
//                 pos.move(2, -movement);    
//             }
//         }

//         void long_left(bool direction){
//             if (direction){
//                 pos.move(-1, 2 * movement);
//             }else{
//                 pos.move(-1, -2 * movement);    
//             }
//         }

//         void short_left(bool direction){
//             if (direction){
//                 pos.move(-2, movement);
//             }else{
//                 pos.move(-2, -movement);    
//             }
//         }
// };

// class BlackKnight: public Knight{
//     public:
//         BlackKnight(int x): Knight(x, 7){
//             symbol = "K";
//             movement = -1; 
//         }
// };

// class Bishop: public ChessPiece{
//     public:
//         int move_x;
//         int move_y;
        
//         Bishop(int x): ChessPiece(x, 0){
//             name = "Bishop";
//             symbol = "b";
//         }

//         Bishop(int x, int y): ChessPiece(x, y){
//             name = "Bishop";          
//         }

//         void move_right(int num_spaces){
//             /*  Moves a bishop forward and to the right.  
//                 If a num_spaces is passed in as a negative number than the bishop will move backward and to the left.
//             */
//             move_x = num_spaces;
//             move_y = num_spaces * movement;
//             pos.move(move_x, move_y);
//         }

//         void move_left(int num_spaces){
//             /*  Moves a bishop forward and to the left.  
//                 If a num_spaces is passed in as a negative number than the bishop will move backward and to the right.
//             */
//             move_x = num_spaces * -1;
//             move_y = num_spaces * movement;
//             pos.move(move_x, move_y);    
//         }
// };

// class BlackBishop: public Bishop{
//     public:
//         BlackBishop(int x): Bishop(x, 7){
//             symbol = "B";
//             movement = -1;
//         }
// };

 



