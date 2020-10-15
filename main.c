#include <stdio.h>
#include <stdbool.h>
void tri_a_bulles(int table[], int taille);

int main(int argc, char **argv){
		
	int table[10];
	
	printf("**********Entrez 10 valeurs**********\n");
	
	for(int i = 0; i<10; i++){
		printf("Entrez une valeur de tab[%d]: ", i);
		scanf("%d", &table[i]);
	}
	
	tri_a_bulle(table, sizeof(table)/4);
	for(int i = 0; i<sizeof(table)/4; i++){
		printf("la valeur de tab[%d] triees a l'aide du tri_a_bulles: %d\n", i, table[i]);
	}
	return 0;
}

void tri_a_bulles(int table[], int taille){
	
	bool tri;
	tri = true;
		
	while(tri == true){
		tri = false;
		for(int i=0; i<taille; i++){
			if(table[i]>table[i+1]){
				int perm;
				perm = table[i];
				table[i] = table[i+1];
				table[i+1] = perm;
				tri = true;
			}
		}
	}
}
