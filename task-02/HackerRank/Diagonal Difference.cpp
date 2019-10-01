int main() 
{
int N,lsum=0,rsum=0;

cin>>N;
int a[N][N];

for(int i=0;i<N;i++)
{   
 for(int j=0;j<N;j++)
 {
 cin>>a[i][j];
 if(i==j)
 {
 lsum+=a[i][j];
 }
 }
 } 
 for(int i=0;i<N;i++)
 {
 for(int j=N-1-i;j>=0;)
 {
 rsum+=a[i][j];
 break;
 }
 } 
 cout<<abs(lsum-rsum)<<endl;
return 0;
}
