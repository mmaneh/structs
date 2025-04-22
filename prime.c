#include <stdio.h>
int foo(int num){
    static int a = 2;
    ++a; 
    int flag = 1;
    for(int i = 2; i <= a/2; ++i){
        if(a % i == 0){
            flag = 0;
            break;
        }
    }   
    if(flag){ 
        return a;
    }else {
        return foo(a);
    }    
        
    
}

int main() {
   printf("%d\n", foo(5));
   printf("%d\n", foo(5));
   printf("%d\n", foo(5));
   printf("%d\n", foo(5));


}
