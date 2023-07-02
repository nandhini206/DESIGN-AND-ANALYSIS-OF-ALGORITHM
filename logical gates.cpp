#include<iostream>
using namespace std;
int gates(int a[],int b[],int n)
{
    int ans1[n],ans2[n],ans3[n],ans4[n],ans5[n],ans6[n],ans7[n];
    for (int i = 0; i < n; i++)
    {
        ans1[i] = a[i] && b[i];
        ans2[i] = a[i] || b[i];
        ans3[i] = !(a[i]);
        ans4[i] = !(ans1[i]);
        ans5[i] = !(ans2[i]);
        ans6[i] =a[i]^b[i];
        ans7[i] = !(ans6[i]);
    }
        cout<<"a"<<"   "<<"b"<<"  "<<"AND"<<"  "<<" OR"<<"  "<<"  NOT"<<"  "<<" NAND"<<"  ";
        cout<<" NOR"<<"  "<<"XOR"<<"  "<<"XNOR";
    for(int i=0;i<n;i++)
    {
        cout<<"\n"<<a[i]<<" | "<<b[i]<< " | "<<ans1[i]<<"  |   "<<ans2[i]<<" |   "<<ans3[i]<<" |   ";
        cout<<ans4[i]<<" |   "<<ans5[i]<<" |  "<<ans6[i]<<" |  "<<ans7[i];
    }

}
int gates2(int c[],int d[],int e[],int m)
{
    int bns1[m],bns2[m],bns3[m],bns4[m],bns5[m],bns6[m];
     for (int i = 0; i < m; i++)
    {
        bns1[i] = (c[i] && d[i]) && e[i];
        bns2[i] = (c[i] || d[i]) || e[i];
        bns3[i] = !(bns1[i]);
        bns4[i] = !(bns2[i]);
        bns5[i] = (c[i]^d[i])^e[i];
        bns6[i] = !(bns5[i]);
    }
    cout<<"\na"<<"   "<<"b"<<"   "<<"c"<<"   "<<"AND"<<"   "<<" OR"<<"   "<<"NAND"<<"   ";
    cout<<"NOR"<<"  "<<"XOR"<<"  "<<"XNOR";
    for(int i=0;i<m;i++)
    {
        cout<<"\n"<<c[i]<<" | "<<d[i]<< " | "<<e[i]<<" | "<<bns1[i]<<"  |   "<<bns2[i]<<"  |   ";
        cout<<bns3[i]<<" |   "<<bns4[i]<<" |  "<<bns5[i]<<" |  "<<bns6[i];
    }
}
int main()
{
    int n=4,m=8,ch,h;
    int a[4]={0,1,0,1};
    int b[4]={0,0,1,1};
    int c[8]={0,0,0,0,1,1,1,1};
    int d[8]={0,0,1,1,0,0,1,1};
    int e[8]={0,1,0,1,0,1,0,1};
    cout<<" \npress 2 - 2 cases of inputs / 3 - 3cases of inputs : ";
    cin>>ch;
    (ch==2)?gates(a,b,n) : gates2(c,d,e,m);
    cout<<"\n\ntry for another case (1/0) : ";
    cin>>h;
    if(h==1)
    {
    main();
    }
}


