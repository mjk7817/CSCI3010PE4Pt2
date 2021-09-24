#include <iostream> 
#include <vector>

/* Function that initializes the Board 
@param int width, int height 
@return array of character arrays 
*/
char** CreateBoard(int width, int height)
{
    char** arr = new char*[height];
    
    for(int i = 0; i < height; i++)
        arr[i] = new char[width];
    
    for(int i = 0; i < height; i++)
        for(int j = 0; j < width; j++)
            arr[i][j] = ' ';
    return arr;
}

/* Function that displays the board 
@param pointer to an array of charecter arrays 
@returns nothing 
*/
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

/* Function that marks the place where the user is 
@param reference to arr, int x, int y, and char marker
@return nothing, exits on out of bounds input 
*/
void PlaceMarker(char** &arr,int x, int y, char marker)
{
    if(x >= 3 || y>=3)
    {
        std::cout << "\nPlaceMarker out of bounds, exiting";
        exit(1);
    }
    arr[y][x] = marker;
}
/*
Function prompts the user to enter a string of values 1-9 for location 
Converts this to an int 
@param none
@returns integer of user choice 
*/

int GetPlayerChoice()
{
    std::cout<<std::endl;
    std::cout<<"Please enter location choice: ";
    std::string choice;
    std::cin >> choice;
    return stoi(choice);
    // which should prompt the user for a location to play, then return that choice, 
}
/* Main handles running the full game loop 
Contains checks setting up x's and o's
Uses switch to determine correct placemarker on the board 
*/
int main()
{
    char* *arr = CreateBoard(3,3);
    DisplayBoard(arr);

    for(int i = 0 ; i < 9; i++)
    {
        char p;
        if(i%2 == 0)
            p = 'x';
        else
            p = 'o';
        switch(GetPlayerChoice()){
            case(1): PlaceMarker(arr,0,0,p); break;
            case(2): PlaceMarker(arr,0,1,p); break;
            case(3): PlaceMarker(arr,0,2,p); break;
            case(4): PlaceMarker(arr,1,0,p); break;
            case(5): PlaceMarker(arr,1,1,p); break;
            case(6): PlaceMarker(arr,1,2,p); break;
            case(7): PlaceMarker(arr,2,0,p); break;
            case(8): PlaceMarker(arr,2,1,p); break;
            case(9): PlaceMarker(arr,2,2,p); break;
            default:
                break;
        }
        DisplayBoard(arr);
    }


    for(int i = 0; i < 3; i++)
        delete arr[i];

    delete[] arr;
}
