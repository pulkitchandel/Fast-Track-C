int reverse(int num){
    int rem, rev = 0;
    while (num >= 1)
   {
      rem = num % 10;
      rev = rev * 10 + rem;
      num = num / 10;
   }
   return rev;
}

int main()
{
    int num;
   printf("Enter A Number:");
   scanf("%d", &num);

   printf("Reversed Number : %d\n", reverse(num));
   return 0;
}
