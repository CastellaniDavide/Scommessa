/*
 * This template is valid both in C and in C++,
 * so you can expand it with code from both languages.
 */

#include <bits/stdc++.h>
using namespace std;

int N;
vector <int> soluzioni;
int n;

void soluzione(int parziale, int pos)
{
    if(pos!=-1)
    {
        parziale[i]=-1;
        parziale[i-1]=-1;
        n-=2;
    }
    if(n==1)
    {
        for(int i=0; i<N; i+)
        {
            if(parziale[i]=-1)
            {
                soluzioni.push_back(parziale[i]);
            }
        }
    }
    else
    {
        for(int i=1; i<N; i++)
        {
            if(parziale[i-1]!=-1 && parziale[i]!=-1 && parziale[i-1]+parziale[i]%2!=0)
            {
                soluzione(parziale,i);
            }
        }
    }
}

int main()
{
//  uncomment the following lines if you want to read/write from files
//  freopen("input.txt", "r", stdin);
//  freopen("output.txt", "w", stdout);
    cin >> N;
    n=N;
    int numeri[N];
    for(int i=0; i<N; i++)
    {
        cin >> numeri[i];
    }
    soluzione(numeri,-1);
    return 0;
}
