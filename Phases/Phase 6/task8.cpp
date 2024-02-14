#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float ladder_length = 15; 
    float distance_wall = 7;
	  

    float wall_height = sqrt(pow(ladder_length, 2) - pow(distance_wall, 2));
    
   
    cout << "The height of the wall is: " << wall_height << " meters" << endl;
    
    return 0;
}

