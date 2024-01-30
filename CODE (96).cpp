/*

Problem Description:
You are given
one number S you have to get to from
another number N. N is always 0. You
have three operations you can use in order to reach
the number S. You can either add one to N, subtract one from N
and double N. You have to find the minimum number of steps to get to S.

Analysis:
This problem can be solved using a greedy algorithm. You have
to reverse the role of both numbers and take a loot
at the decision you make at every steps.

Solution:
You can reverse the problem, and not
going from N to S but going from S
to N. Then, there are three possible
steps we can make: divide the number
by two, increment or decrement in one.
If the number is even, the best decision
is to divide the number, and this is
because that would guarantee the minimum
number of steps. If you decide to go with
incrementing or decrementing, you’ll get a
bigger number, which means in the future
you will need more steps to get to the target
number. When the number is odd, we have to either
increment or decrement the number, the best decision
is to go to the number which half is even.
If we have an odd number, adding or subtracting one from
it, would yield an even number. The half of this number
could be either an even or an odd number, we prefer
it to be an even number because that way we can
save some further steps. To illustrate this, here
is an example: suppose we have number 125. If we
choose to go 1 up, we’ll get number 126. The half
of this number is 63 in such case we will also have
to go up or down one number. If we go 1 down, we’ll get
the number 124. The half of this number is 62, which
can be further reduced to 31. Then, we have passed from
125 to 31 in two steps, meanwhile in the other branch,
we will
go from 125 to 62/64 in the same number of steps.



*/


#include <cstdio>
#include <queue>
#include <cstring>
#include <map>

using namespace std;

typedef long long ll;

ll S, s;

int main() {
    while (scanf("%lld", &S) == 1) {
        s = 0L;
        while (S != 0L) {
            if (S % 2L == 0L) S /= 2L;
            else {
                if ((((S-1) / 2L) % 2L == 0L) || (S-1 == 2)) S--;
                else S++;
            }
            s++;
        }
        printf("%lld\n", s);
    }
}
