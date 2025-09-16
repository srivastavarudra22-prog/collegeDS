#include <iostream>

int main() {
    using namespace std;
    int n,m,p,i,j,k,a[i],b[j],c[k],a,b,c,vector;
    cin>>n>>m>>p;
    
    vector <int> a(n);
    for (i=0;i<n;i++)
    cout<<a[i];
    vector <int> b(m);
    for (j=0;j<m;j++)
    cout<<b[i];
    vector<int>c(p);
    for (k=0;k<p;k++)
    cout<<c[k];
    if(a[i] <b[i])  {   
    c[k]=a[i];
    k++;
    }
    i++;
    else if(a[i]>b[i])

    c[k]=b[j];
    j++;
} 
k++;
}
