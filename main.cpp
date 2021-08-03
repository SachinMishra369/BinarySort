#include <iostream>
using namespace std;
void BubbleSearch(int a[],int size,int l,int r,int key)
{
  int mid=(l+r)/2;

  int flag=0;
  if(r>=l)
  {
      if(a[mid]==key){
        cout<<"Data found at"<<mid+1<<"th position"<<endl;
      }
      else if(key>a[mid])
      {
        l=mid+1;
        BubbleSearch(a,size,l, r, key);
      }
      else if (a[mid]>key)
      {
        r=mid-1;
        BubbleSearch(a,size,l, r, key);
      }
  }
else
  {
    cout<<"\n404";
  }

}
int main() {
  int size;
  int key;
  cout<<"Enter Size:";
  cin>>size;
  int data[size];
  cout<<"\n Enter Data"<<endl;
  for(int i=0;i<size;i++)
  {
    cin>>data[i];
  }
  cout<<"\n Enter Data to be found:"<<endl;
  cin>>key;
  BubbleSearch(data, size, 0, size, key);

}