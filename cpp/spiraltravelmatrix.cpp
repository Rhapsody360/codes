#include <bits/stdc++.h>
using namespace std;

the whole thing is wrong idk why

int main(){
    
    int x; //rows
    int y; //columns
    cin >> x >> y;
    int matrix[x][y];
    bool visited[x][y]={0};
    for (int i = 0;i<x;i++){
        for (int j = 0;j<y;j++){
            cin>>matrix[i][j];
        }
    }
    cout << "enter k:";
    int k; //the number upto which you need to carry the spiral travel
    cin >> k;
    cout << "spiral traversing\n";

    int ans = matrix[0][0];

    int row = 0,col=0;
    bool right =1,down =0,left=0,up=0;
    while (k--){
        visited[row][col]=1;
        if (right){
            //cout << "going right\n";
            cout<<matrix[row][col] << " ";
            visited[row][col]=1;
            col++;
            if(visited[row][col] && visited[row+1][col]){
                //terminate
                break;
            }
            else if (visited[row][col]){
                right =0;
                down =1;
                left=0;
                up=0;
            }
            else if (col == y){
                right =0;
                down =1;
                left=0;
                up=0;
                col -=1;
            }
        }
        if (down){
            //cout << "going down\n";
            cout<<matrix[row][col] << " ";
            visited[row][col]=1;
            row++;
            if (visited[row][col] && visited[row][col-1]){
                //terminate
                break;
            }
            else if(visited[row][col]){
                right = 0;
                down =0;
                left = 1;
                up =0;
            }
            else if(row == x){
                right = 0;
                down =0;
                left = 1;
                up =0;
                row -= 1;
            }
        }
        if (left){
            //cout << "going left\n";
            cout<<matrix[row][col] << " ";
            visited[row][col]=1;
            col--;
            if (visited[row][col] && visited[row-1][col]){
                //terminate
                break;
            }
            else if(visited[row][col] || col == 0){
                right = 0;
                down =0;
                left = 0;
                up =1;
            }
            else if (col == -1){
                right = 0;
                down =0;
                left = 0;
                up =1;
                col += 1;
            }
        }
        if (up){
            //cout << "going up\n";
            cout<<matrix[row][col]<< " ";
            visited[row][col]=1;
            row--;
            if (visited[row][col] && visited[row][col+1]){
                //terminate
                break;
            }
            else if(visited[row][col]){
                right = 1;
                down =0;
                left = 0;
                up =0;
            }
        }
        for (int i = 0;i<x;i++){
            for (int j = 0;j<y;j++){
                cout<<visited[i][j] << " ";
            }
            cout <<"\n";
        }
    }


    return 0;
}
