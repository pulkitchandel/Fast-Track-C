int main() {
   int num;
   printf("Enter a power: ");
   scanf("%d", &num);
   printf("2^%d = %d", num, 1<<num); //left shifting an integer “x” with an integer “y” denoted as ‘(x<<y)’ is equivalent to multiplying x with 2^y

   return 0;
}
