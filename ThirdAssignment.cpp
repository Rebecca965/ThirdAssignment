#include <iostream>
using namespace std;
void minsortting(int *,int);
void maxsortting(int *,int);
void square (int &);
int main()
{
    int numlist[10];
    int arrsize=sizeof(numlist)/sizeof(numlist[0]);
    cout<<"You can enter at most "<<arrsize<<" numbers \n";
    //cout<<sizeof(numlist);

    for(int use=0;use<arrsize;use++)
    {
        cout<<"Enter a number : ";
        cin>>numlist[use];
    }
    minsortting(numlist,arrsize);
    maxsortting(numlist,arrsize);
    cout<<"\nThe square of each value \n";
    for(int i=0;i<arrsize;i++)
    {
        square(numlist[i]);
        cout<<numlist[i]<<"\t";
    }
}
 void minsortting(int *pointer,int arrsize)
{
    cout<<"Min to Max\t";
    for(int out=0;out<arrsize-1;out++)
    {
        int in=out+1;
        for(;in<arrsize-1;in++)
        {
            int temp;
            if(*(pointer+out)>*(pointer +in))
            {
                temp=*(pointer+out);
                *(pointer+out)=*(pointer+in);
                *(pointer+in)=temp;
            }

        }
        cout<<*(pointer+out)<<"\t";
    }
    cout<<endl;

}
void maxsortting(int *pointer,int arrsize)
{
    cout<<"Min to Max \t";
     for(int out=0;out<arrsize-1;out++)
     {
        int in=out+1;
        for(;in<arrsize-1;in++)
        {
            int temp;
            if(*(pointer+out)<*(pointer +in))
            {
                temp=*(pointer+out);
                *(pointer+out)=*(pointer+in);
                *(pointer+in)=temp;
            }

        }
        cout<<*(pointer+out)<<"\t";
}

}
void square(int &num)
{
    num*=num;
}
