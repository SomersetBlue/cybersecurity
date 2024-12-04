#include <iostream>

#include <tto.hpp>

int main() {
    std::cout << "Welcome to Tic Tac Toe" << std::endl;

    TTO tto;

    do {
        tto.print();
    } while (!tto.has_won() && !tto.is_draw() && tto.user_move());

    if (tto.has_won()) {
        std::cout << "Player " << (tto.current_player() ? 'O' : 'X') << " has won!\n";
    } else if (tto.is_draw()) {
        std::cout << "It's a draw!\n";
    }

    return 0;
}
