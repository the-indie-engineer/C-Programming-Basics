/*
find_no_handshakes.c

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
    return num;
}
