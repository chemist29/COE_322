#include<iostream>
#include<string>
#include<vector>
using std::cout;
using std::cin;
using std::endl;
using std::vector;

int main()
{
 vector<vector<int> > vect{ { 1, 2, 3, 4 }, 
                               { 4, 5, 6, 7 }, 
                               { 7, 8, 9 ,10} }; 
 vector<int> num ={0,1,0};
 vector<vector<int>> matrix(4,num);
 cout <<matrix[0][0]<<endl;
    // Displaying the 2D vector 
    cout <<matrix.size()<<"matrix.size()"<<endl;
    for (int i = 0; i < matrix.size(); i++) { 
        for (int j = 0; j < matrix[i].size(); j++) 
            cout << matrix[i][j] << " "; 
        cout << endl; 
    }  return 0;
}


