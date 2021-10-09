int find_occurrance(int num, int digit){
    int count,temp,rem;
    count=0;
    temp=num;

    while(temp>0)
    {
        rem=temp%10;
        if(rem==digit)
            count++;
        temp/=10;
    }
    return count;
}
int main()
{
    int num,digit;

    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter digit to search: ");
    scanf("%d",&digit);

    printf("Total occurrence of digit %d is %d.\n",digit,find_occurrance(num,digit));

    return 0;
}
