#include <stdio.h>
typedef struct { int id; double balance; } Account;
int main(void){ Account a={1001,0.0}; int op; double amount; puts("1 deposit 2 withdraw"); if(scanf("%d %lf",&op,&amount)!=2||amount<0)return 1; if(op==1)a.balance+=amount; else if(op==2&&amount<=a.balance)a.balance-=amount; else {puts("Invalid transaction");return 1;} printf("Balance: %.2f\n",a.balance); return 0;}
