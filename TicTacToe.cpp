#include <iostream> 
#include <vector>

int** CreateBoard(int width, int height)
{
    int** arr = new int*[height];
    
    for(int i = 0; i < height; i++)
        arr[i] = new int[width];
    
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            arr[i][j] = j;
    return arr;
}

void DisplayBoard(int* *arr)
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
    int* *arr = CreateBoard(3,3);
    DisplayBoard(arr);

    delete[] arr;
}