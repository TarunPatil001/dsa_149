#include <iostream>
using namespace std;

int main()
{
    int input;
    cout << "Enter the input: ";
    cin >> input;

    int row=1;
    while(row<=input){
    
        int col=1, end=input-row+1;
        while (col<=end)
        {
            
            cout << col;
            col++;
        }

        int l_star = input-end+row-1;
        while (l_star)
        {
            cout << "*";
            l_star--;
        }
        
        int end2=input-row+1;
         while (end2)
        {
            
            cout << end2;
            end2--;
        }
        
        cout << endl;
        row++;
    }

    return 0;
}


// output

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1