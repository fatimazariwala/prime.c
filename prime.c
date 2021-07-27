include <stdio.h>
int isprime(int,int);

int main()
{
     int num=456,prime;
printf("Enter a number: %d",num);



        prime=isprime(num,num/2);
        if (prime==1)
            printf("\n %d is a prime number" ,num);
        else
            printf("\n %d is not a prime number",num);

    return 0;
}
int isprime(int num,int i)
{
if (i==1)
{
    return 1;
}

    else
    {
        if (num%i==0)
            return 0;
        else
            isprime(num,i-1);
    }
}

