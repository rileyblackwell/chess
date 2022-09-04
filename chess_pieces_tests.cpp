#include "unit_test_framework.h"
#include "chess_pieces.h"

using namespace std;


TEST(test_position_ctor) {
    Position pos(1, 2);
    ASSERT_EQUAL(pos.get_x(), 1);
    ASSERT_EQUAL(pos.get_y(), 2);
}

// TEST(test_pawn_ctor) {
//     ChessPiece* pawn = Pawn()
//     ASSERT_EQUAL(pawn.get_x_pos(), 1);
//     ASSERT_EQUAL(pawn.get_y_pos(), 2);
// }

// TEST (test_pieces) {
//     Knight piece(1);
//     BlackKnight bpiece(1);
//     Position pos = piece.get_position();
//     Position bpos = bpiece.get_position();
//     cout << pos.get_x() << ", " << pos.get_y() << endl << bpos.get_x() << ", " << bpos.get_y() << endl << endl;
   
//     Position pos1 = piece.get_position();
//     Position bpos1 = bpiece.get_position();  
//     cout << pos1.get_x() << ", " << pos1.get_y() << endl << bpos1.get_x() << ", " << bpos1.get_y() << endl << endl;
    
//     Position pos2 = piece.get_position();
//     Position bpos2 = bpiece.get_position();  
//     cout << pos2.get_x() << ", " << pos2.get_y() << endl << bpos2.get_x() << ", " << bpos2.get_y() << endl << endl;
// }



TEST_MAIN()