#include <iostream>
using namespace std;
int main()
{
    int i,j;
    int matrix[i][j];

    int rows,col;

    cout<<"************ADDITION OF MATRICES**********"<<endl;

    cout<<"Enter the total number of rows and columns you want : "<< endl;
    cin>>rows>>col;
    for( int i=0; i<rows; i++)
    {
        for(int j=0; j<col; j++)
        {
        cout<<"Enter the number "<<i<<endl;
        cin>>matrix[i][j];
        }
    }

    cout<<"The array elements are \n";
    for (int i=0;i<rows;i++)
    {
    for(int j=0;j<col;j++)
    {
      cout<<matrix[i][j]<<"   \t";
    }
    }



}
