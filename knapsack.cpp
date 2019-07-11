#include <iostream>

using namespace std;

int knapSack(int capMax, int pesos[], int valores[], int numItens){
    int memo[numItens+1][capMax+1];
	for(int i = 0;i <= numItens;i++){
        for(int j = 0;j <= capMax;j++){
            if(i == 0 || j == 0){
                memo[i][j] = 0;
            }else if(pesos[i-1] <= j){
                memo[i][j] = max(memo[i-1][j],valores[i-1]+memo[i-1][j-pesos[i-1]]);
            }
            else
                memo[i][j] = memo[i-1][j];
        }
	}
	return memo[numItens][capMax];
}

int main(){
    int pesos[4] = {1,3,4,5};
    int valores[4] = {1,4,5,7};
    int W = 7;
    int n = sizeof(valores)/sizeof(valores[0]);
    cout<<knapSack(W, pesos, valores, n);
    return 0;
}
