#include<bits/stdc++.h>
using namespace std;
int a,b,u,v,n,ne=1, mini,mincost=0,cost[9][9],parent[9],i,j;
int find1(int i)
{
while(parent[i])
 i=parent[i];
return i;
}
int union1(int i,int j)
{
if(i!=j)
{
parent[j]=i;
return 1;
}
return 0;
}
int main()
{
cout<<"Enter no of vertices:\n";
cin>>n;
cout<<"Enter the adjacency matrix\n";
for(i=1;i<=n;i++)
{
for(j=1;j<=n;j++)
{
cin>>cost[i][j];
if(cost[i][j]==0)
cost[i][j]=999;
}}
while(ne<n)
{
for(i=1,mini=999;i<=n;i++)
{
for(j=1;j<=n;j++)
{
if(cost[i][j]<mini)
{
mini=cost[i][j];
a=u=i;
b=v=j;
}}}
u=find1(u);
v=find1(v);
if(union1(u,v))
{
cout<<"\n"<<ne++<<" edge("<<a<<" "<<b<<")="<<mini;
mincost = mincost + mini;
}
cost[a][b]=cost[b][a]=999;
}
cout<<"\nmini:"<<mincost;
}
