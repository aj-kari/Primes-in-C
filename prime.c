//AJ Kari
//This program will find the two prime numbers that adds up to the even number

#include <stdio.h>

//This function will find the largest prime number starting 1 less then the input
int findPrime(int num); 

//this function will check if the input number - a prime is also a prime
int isPrime(int num);

int main()
{
	int in_num; 
	int num_1, num_2;
	
	printf("Please enter an even number: (ctrl-d to exit) \n");
	
	//main loop to keep the program running
	while (1 == scanf("%d" ,&in_num))
	{
		//case 1: check if the input is even
		if(in_num % 2 != 0){
			printf("The number %d is not even. Please enter an even number. \n" ,in_num);
		}
		//case 2: find the first prime number less then the input
		else{
			num_1 = findPrime(in_num);
		//case 3: check if the remainder is also a prime
			if(num_1 > 0){
				num_2 = in_num - num_1;
				if(isPrime(num_2) == 1)
				printf("The number %d is the sum of the two primes %d and %d . \n\n" ,in_num ,num_1 ,num_2);
				printf("Please enter an even number: (ctrl-d to exit) \n");
			}
		//case 4: make sure the input was not the prime number 2
			else if(in_num == 2){
				printf("Number 2 is prime and it is the sum of 1 and 1. \n");
			}
		//case 5: the input number is not the sum of two primes
			else{
				printf("Nice, the number %d is the only even number that is not the sum of two primes. \n" ,in_num);
			}
		}
	}
return 0;
}

int findPrime(int num)
{
	int i;
	for(i = num; i > 2; i--)
	{
		if(isPrime(i) == 1)
		return i;
	}
	return 0;
}

int isPrime(int num)
{
	int i;
	for(i = 2; i < num; i++)
	{
		if(num % i == 0 && i != num){
		return 0;}
	}
	return 1;
}