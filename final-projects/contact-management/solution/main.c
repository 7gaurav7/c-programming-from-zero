#include <stdio.h>
#include <string.h>
typedef struct { int id; char name[40]; char phone[24]; } Contact;
int main(void){ Contact c[100]; size_t n=0; int id; char name[40],phone[24]; puts("Enter id name phone; Ctrl-D to stop:"); while(n<100 && scanf("%d %39s %23s",&id,name,phone)==3){ c[n]=(Contact){id,"",""}; strcpy(c[n].name,name); strcpy(c[n].phone,phone); ++n;} for(size_t i=0;i<n;++i) printf("%d %s %s\n",c[i].id,c[i].name,c[i].phone); return 0;}
