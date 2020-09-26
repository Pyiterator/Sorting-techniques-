#include<iostream>
using namespace std;
int partition(int a[],int s,int l)
{
int pivot=a[l];//pick last as pivot element
int pindex=s;
for(int i=s;i<=l-1;i++)
{
if(a[i]<pivot)
{
swap(a[pindex],a[i]);
pindex++;
}
}
swap(a[pindex],a[l]);
return pindex;

}
void quickSort(int a[],int s,int l)
{
if(s<l)
{
int locPivot=partition(a,s,l);
quickSort(a,s,locPivot-1);
quickSort(a,locPivot+1,l);
}
}
int main()
{
int a[]={23,4,2,5,46,76,98};
int n=sizeof(a)/sizeof(a[0]);
quickSort(a,0,n-1);
for(int i=0;i<n;i++)
{
cout<<a[i]<<" ";
}
}
