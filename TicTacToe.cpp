#include <iostream> 
#include <vector>

void CreateBoard()
{
    int matrix [3][3] = {0};
    std::cout<< matrix<<std::endl;
}

void DisplayBoard(int arr[][3])
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << "\n";
    }
}

int main()
{
    CreateBoard();
    int arr[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    DisplayBoard(arr);
}