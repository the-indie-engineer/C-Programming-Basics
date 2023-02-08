/*
find_no_handshakes.c

At the annual meeting of Board of Directors of Acme Inc, every one starts shaking hands with everyone else in the room. Given the fact that any two persons shake hand exactly once, Can you tell the total count of handshakes?

Input format
Input contains an integer N, the total number of Board of Directors of Acme.

Output format
Print the number of handshakes.

Code constraints
0 <=N <=10000

Sample testcases
Input 1
1
Output 1
0

Author: Thiruvarulselvan K, https://github.com/the-indie-engineer
Date created: 08 Feb 2023
*/


int handshake(int n) {
    int num=n-1;
    n-=2;
    while(n>0)
    {
        num+=n;
        n--;
    }
    return num; //returns the number of handshakes
}
