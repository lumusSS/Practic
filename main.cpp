#include <iostream>
#include <vector>
#include <algorithm>

#include "vector.hpp"

using namespace std;

int main()
{

    int             countSquares;
    vector<Vector>  positionSquares;

    int xMax, xMin;
    int yMax, yMin;

    cout << "Count: ";
    cin >> countSquares;

    for(int i = 0; i < countSquares; i++)
    {
        Vector t_positionSquares;
        
        cout << "X" << '[' << i+1 << "]: ";
        cin >> t_positionSquares.x;
        cout << "Y" << '[' << i+1 << "]: ";
        cin >> t_positionSquares.y;

        if(t_positionSquares.x <= 0 || t_positionSquares.y <= 0)
            return 1;

        positionSquares.push_back(t_positionSquares);
    }

    xMax = positionSquares[0].x;
    xMin = positionSquares[0].x;

    yMax = positionSquares[0].y;
    yMin = positionSquares[0].y;

    for(int i = 0; i < positionSquares.size(); i++)
    {
        xMax = max(xMax, positionSquares[i].x);
        xMin = min(xMin, positionSquares[i].x);

        yMax = max(yMax, positionSquares[i].y);
        yMin = min(yMin, positionSquares[i].y);
    }

    cout << "(" << xMin << ", " << yMin << ')' << endl;
    cout << "(" << xMax << ", " << yMax << ')' << endl;

    return 0;
}