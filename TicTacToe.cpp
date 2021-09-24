#include <iostream> 
#include <vector>

int CreateBoard()
{
    int matrix [3][3] = {0};
    return matrix;
}

void DisplayBoard()
{
    system("cls");
    std::cout<<"\n\n\t Tic Tac Toe\n\n";

    std::cout<<"Player1 (X)- Player2 (Y)"<<std::endl;
    std::cout<<std::endl;

    std::cout<< "|    |   "<<std::endl;
    std::cout<<" "<<matrix[1]<<" "<<matrix[2]<<" "<<matrix[3]<<std::endl;
    std::cout<< "|    |   "<<std::endl;
    std::cout<<" "<<matrix[4]<<" "<<matrix[5]<<" "<<matrix[6]<<std::endl;
    std::cout<< "|    |   "<<std::endl;
    std::cout<<" "<<matrix[7]<<" "<<matrix[8]<<" "<<matrix[9]<<std::endl;

}
std::string GetPlayerChoice()
{
    std::cout<<std::endl;
    std::cout<<"Please enter location choice: ";
    std::string choice;
    return choice;
    // which should prompt the user for a location to play, then return that choice, 
}

int main()
{
    CreateBoard();
}