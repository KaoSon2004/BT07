#include <iostream>
using namespace std;
int TimKiem(int *M,int n,int a)
{
    int ViTri;
    for (int i=0;i<n;i++)
        if (*(M+i)==a)
            ViTri=i;
    return ViTri;


}
int main ()
{

    int n;
    cin >>n;
    int* M=new int [n];
    for (int i=0;i<n;i++)
        cin>>*(M+i);
    int a;
    cin >>a;
    cout <<TimKiem(M,n,a);
    delete[] M;
    return 0;
}
