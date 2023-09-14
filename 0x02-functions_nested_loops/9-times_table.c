+234 803 231 5249, +234 706 684 6990, +234 703 420 9128, +234 705 924 4477, You
MONDAY

truevaluesintegratedservices
+234 705 924 4477
Olayemi
+234 803 231 5249
There is a space there. If there is no space it would not say that
Wer are you guys, slack or where
8:26 PM

QS olamide
+234 703 420 9128
truevaluesintegratedservices
+234 705 924 4477
Wer are you guys, slack or where
I’m still where I am. I think I will need to focus on next assignment. This has gone already. I was stuck in the afternoon and I couldn’t find way around it.
8:31 PM
Just got home from work now … tired already
8:31 PM

truevaluesintegratedservices
+234 705 924 4477
But the time hasn't elapsed yet naw
8:32 PM

Olayemi
+234 803 231 5249
Do other questions if that one is not working
8:33 PM

truevaluesintegratedservices
+234 705 924 4477
You'll need to do these tasks today in order to boost your score
8:35 PM

QS olamide
+234 703 420 9128
truevaluesintegratedservices
+234 705 924 4477
But the time hasn't elapsed yet naw
Just 10hrs left
8:37 PM
QS olamide
+234 703 420 9128
truevaluesintegratedservices
+234 705 924 4477
You'll need to do these tasks today in order to boost your score
It would have gone b4 tomorrow morning
8:38 PM
And I’m exhausted like this
8:38 PM

truevaluesintegratedservices
+234 705 924 4477

2:52

8:40 PM

QS olamide
+234 703 420 9128
truevaluesintegratedservices
+234 705 924 4477
2:52
Lolz…alright. Thanks bro. Really appreciate
8:50 PM

truevaluesintegratedservices
+234 705 924 4477
Hello
8:32 PM
Has everyone done today's task?
8:33 PM

Olayemi
+234 803 231 5249
Good evening
8:33 PM
Not yet
8:33 PM
I'll do it before the end of today
8:33 PM

truevaluesintegratedservices
+234 705 924 4477
Okay
8:33 PM
I'm about to begin
8:33 PM

Olayemi
+234 803 231 5249
okay
8:34 PM
cool
8:34 PM
I just want to watch the videos
8:34 PM

👍

truevaluesintegratedservices
+234 705 924 4477
Me too
8:36 PM
truevaluesintegratedservices
+234 705 924 4477
Olayemi
+234 803 231 5249
okay
Hello
10:36 PM
How'fa
10:36 PM
WEDNESDAY

Olayemi
+234 803 231 5249
0x02. C - Functions, nested loops


0-putchar.c

#include "main.h"
/**
 * main - print _putchar
 * is written by mbah
 * Return: 0
 */

int main(void)
{
putchar('');
_putchar('p');
_putchar('u');
_putchar('t');
_putchar('c');
_putchar('h');
_putchar('a');
_putchar('r');
_putchar('\n');
return (0);
}


1-alphabet.c

#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}



2-print_alphabet_x10.c

#include "main.h"

/**
 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
 * followed by a new line
 */
void print_alphabet_x10(void)
{
	char ch;
	int i;

	i = 0;

	while (i < 10)
	{
		ch = 'a';
		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}


3-islower.c

#include "main.h"

/**
 * _islower - check if char is lowercase
 * @c: is the char to be checked
 * Return: 1 if char is lowercase, otherwise 0.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
	


4-isalpha.c

#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * Return: 1 if c is a letter, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}


5-sign.c

#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: the int to check
 * Return: 1 and prints + if n is greater than zero
 * 0 and prints 0 if n is zero
 * -1 and prints - if n is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
}
		_putchar(48);
		return (0);
	} else if (n < 0)
	{
		_putchar('-');
	}
		return (-1);
}


6-abs.c

#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	return (-n);
}


7-print_last_digit.c

#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	if (n < 0)
	n = -n;

	a = n % 10;

	if (a < 0)
		a = -a;

	_putchar(a + '0');

	return (a);
}


8-24_hours.c

#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer
 * starting from 00:00 to 23:59
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;

	while (i < 24)
	{
		j = 0;
		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}


9-times_table.c

#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 */
void times_table(void)
{
	int i, j, k;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			k = j * i;
			if (j == 0)
			{
				_putchar(k + '0');
			}

			if (k < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			} else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
