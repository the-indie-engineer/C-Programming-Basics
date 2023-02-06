int addDigits(int num){
int count=0;
int flag=1;
if(num==0) return 0;
while(flag)
{
 int temp=num;
 while(temp)
 {
     temp/=10;
     count++;
 }
if(count==1) 
{
    flag=0; break;
}
else
{
    count=0;
    int sum=0;
    while(num)
    {
        int digit = num%10;
        // printf("%d",digit);
        sum+=digit;
        num/=10;
    }
    num=sum;
}
}
return num;
}