#include<iostream>
using namespace std;
void swap(int * A,int lar,int i)
{
    int temp=A[lar];
    A[lar]=A[i];
    A[i]=temp;
}
void create_heap(int *A,int n,int i)
{ 
   if(i<0)return;
   int lar=i;
   int l=2*i+1,r=2*i+2;
   if(l<n&& A[i]<A[l])
   {
        lar=l;
   }
    if(r<n&&A[lar]<A[r])
    {
        lar=r;
    }
    if(lar!=i){
    std::swap(A[lar],A[i]);
    create_heap(A,n,lar);}
    else
     create_heap(A,n,i-1);
    

}
void heap_sort(int *A,int n)
{
    for(int i=n-1;i>0;i--)
      {
        std::swap(A[0],A[i]);
        create_heap(A,n,0);
      }
}
int main()
{
    int A[]={7,23,12,11,16,11};
    int n=6;
    
    create_heap(A,n,n/2-1);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
    heap_sort(A,n);
    for(int i=0;i<n;i++)
    {
        cout<<A[i]<<endl;
    }
}