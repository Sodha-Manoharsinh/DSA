#include <bits/stdc++.h>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < i; k++)
        {
            cout << "*";
        }
        for(int l = 0; l< i-1; l++){
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < ((2*n-1)-(2*i)); k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}

void pattern4(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < (2*i+1); k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for(int k = 0; k < ((2*n-1)-(2*i)); k++)
        {
            cout << "*";
        }
        
        cout << endl;
    }
}

void pattern5(int n){
    for(int i = 1;i <= 2*n-1;i++){
        int stars = i<=n? i: 2*n-i;
        for(int j =0; j<stars;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void pattern6(int n){
    int txt = 1;
    for(int i = 0;i <n;i++){
        for(int j =0; j<=i;j++){
            cout<<txt;
            txt = txt == 1 ? 0 : 1;
        }
        txt = i%2 ? 1: 0;
        cout<<endl;
    }
}

void pattern7(int n){
    for(int i = 0;i <n;i++){
        for(int j = 0;j<=i;j++){
            cout<<j+1;
        }
        for(int j = 1; j<=(n*2-2-(i*2)); j++){
            cout<<" ";
        }
        for(int j = i; j>=0; j--){
            cout<<j+1;
        }
        cout<<endl;
    }
}

void pattern8(int n){
    int num = 1;
    for(int i = 0;i <n;i++){
        for(int j = 0; j<=i;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<endl;
    }
}

void pattern9(int n){
    for(int i = 0;i <n;i++){
        for(int j = 0; j<=i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}

void pattern10(int n){
    for(int i = 0;i < n;i++){
        for(int j = 0; j<n-i;j++){
            cout<<char(65+j);
        }
        cout<<endl;
    }
}

void pattern11(int n){
    for(int i = 0;i <n;i++){
        for(int j = 0; j<=i;j++){
            cout<<char(65+i);
        }
        cout<<endl;
    }
}

void pattern12(int n){
    for(int i = 0;i <n;i++){
        char a = 'A';
        for(int j =0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0; j<2*i+1;j++){
            cout<<a;
            a = j<i? a+1: a-1;
        }
        cout<<endl;
    }
}

void pattern13(int n){
    for(int i = 0;i <n;i++){
        char a = 'A'+n-i-1;
        for(int j =0;j<=i;j++){
            cout<<a;
            a++;
        }
        cout<<endl;
    }
}

void pattern14(int n){
    int stars = n;
    int spaces = 0;
    for(int i = 0;i <(n*2);i++){
        for(int j = 0; j< stars;j++){
            cout<<"*";
        }
        for(int j = 0; j<spaces;j++){
            cout<<" ";
        }
        for(int j = 0; j< stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n-1){
            stars--;
            spaces += 2;

        }else if(i>n-1){
            stars++;
            spaces -= 2; 

        }
    }
}

void pattern15(int n){
    int stars = 0;
    int spaces = (n*2)-2;
    for(int i = 0;i <(n*2)-1;i++){
        for(int j = 0; j<= stars;j++){
            cout<<"*";
        }
        for(int j = 0; j<spaces;j++){
            cout<<" ";
        }
        for(int j = 0; j<= stars;j++){
            cout<<"*";
        }
        cout<<endl;
        if(i<n-1){
            stars++;
            spaces -= 2;

        }else if(i>=n-1){
            stars--;
            spaces += 2; 
        }
    }
}

void pattern16(int n){
    for(int i = 0; i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0||j==n-1||i==0||i==n-1){
                    cout<<"* ";
                }else{
                    cout<<"  ";
                }
            }
        
        cout<<endl;
    }
}

void pattern17(int n){
    for(int i = 0; i<n*2-1;i++){
        for(int j = 0; j<n*2-1; j++){  
            int top = i;
            int left = j;
            int right = 2*n-2-j;
            int bottom = 2*n-2-i;


            cout<< (n-min(min(top,bottom),min(right,left)));
        }
        cout<<endl;
    }
}

int main()
{
    int n;
    cin >> n;
    pattern17(n);
    return 0;
}