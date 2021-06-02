#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin >> t;
	cin.ignore(1);
	while(t--){
        char s1[300], s2[300];
		char t[300];
		cin.getline(s1,300);
		cin.getline(s2,300);
		char *token,*a[300];
		int n=0;
		token = strtok(s1, " ");
		while(token!=NULL){
			a[n]=token;
			token=strtok(NULL, " ");
			n++;
		}
		char *token1, *a1[300];
		int n1=0;
		token1 = strtok(s2, " ");
		while(token1!=NULL){
			a1[n1]=token1;
			token1=strtok(NULL, " ");
			n1++;
		}
		for (int i=0; i<n-1; i++){
			int j=i+1;
			while(j<n){
				if (strcmp(a[i],a[j])==0){
					for (int k=j; k<n-1; k++){
						a[k]=a[k+1];
					}
					n -= 1;
				}
				else
				j += 1;
			}
		}
		for (int i=0; i<n; i++){
			for (int j=i+1; j<n; j++){
				if (strcmp(a[i],a[j])>0)
				swap(a[i],a[j]);
			}
		}		
		int tam = 2;
		for (int i=0; i<n; i++){
			for (int j=0; j<n1; j++){
				if (strcmp(a[i],a1[j])==0){
					tam = 0;
					break;
				}
				else{
					tam = 1;
				}
			}
			if (tam==1)
			cout << a[i] << " ";
		}
		cout << endl;
	}
}
