#include <iostream> 
#include <vector>

char** CreateBoard(int width, int height)
{
    char** arr = new char*[height];
    
    for(int i = 0; i < height; i++)
        arr[i] = new char[width];
    
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            arr[i][j] = 'x';
    return arr;
}

void DisplayBoard(char** arr)
{
    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            std::cout << arr[i][j] << "|";
        }
        std::cout << arr[i][2] << "\n";
    }
}

void PlaceMarker(char** &arr,int x, int y, char marker)
{
    if(x >= 3 || y>=3)
    {
        std::cout << "\nPlaceMarker out of bounds, exiting";
        exit(1);
    }
    arr[y][x] = marker;
}

int main()
{
    char* *arr = CreateBoard(3,3);
    DisplayBoard(arr);

    for(int i = 0; i < 3; i++)
        delete arr[i];

    delete[] arr;
}