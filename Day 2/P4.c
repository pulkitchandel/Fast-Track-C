void palindrome(int n){
    int temp,r,sum=0;
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=(sum*10)+r;
        n=n/10;
    }
    if(temp==sum)
        printf("palindrome number \n");
    else
        printf("NOT palindrome\n");
}

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    palindrome(n);

return 0;
}
