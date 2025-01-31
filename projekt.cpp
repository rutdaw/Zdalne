#include<iostream>

bool czy_pierwsz(int n){
    if(n < 2) return false;
    for(int i = 2 ; i * i < = n; i ++ ){
        if(n % i==0)return false;

    }
    return true;


}

int main(){
    int value;
    std::cin>>value;
    std::cout<<value<<" jest "<< (czypierwsza(value)? "liczba pierwsza" : "nie jest liczba pierwsza")<<<std::endl;
    return 0;
}
