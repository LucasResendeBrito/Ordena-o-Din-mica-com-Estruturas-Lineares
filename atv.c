#include <stdlib.h>
#include <stdio.h>

int* FazerArray(int *n){
    
    printf("Quantos numeros vc quer colocar na lista?: ");
    scanf("%d",n);
    int *lista = malloc((*n) * sizeof(int));
    
    for(int i = 0;i<*n;i++){
        printf("digite o numero %d:  ",i+1);
        scanf("%d",&lista[i]);
        for(int k =0 ;k<=i;k++){
            printf("%d \n",lista[k]);
        }
    }
    return lista;

}

void bubblesort(int arr[], int n){
    int i,j,temp,trocou;

    for(i = 0; i < n-1;i++){
        trocou = 0;
        printf("passo %d\n",i);

        for(j= 0;j<n-1;j++){
            if( arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j]= arr[j+1];
                arr[j+1] = temp;
                trocou = 1;

            }
            for(int k = 0;k<n;k++){
            printf(" %d",arr[k]);
        }
        printf("\n");
    }
    if(trocou == 0){
        printf("o array esta ordeando");
        break;
    } 
    }
    
}
void selectionsort(int arr[], int n){
    int i,j,menor,temp;

    for(i = 0; i < n-1;i++){
        menor= i;
        printf("passo %d\n",i);

        for(j= i+1;j<n;j++){
            if( arr[j] < arr[menor]){
                menor = j;
            }
            }
            if(menor != i){
                temp = arr[menor];
                arr[menor]= arr[i];
                arr[i]= temp;
            }
          for(int k=0;k<n;k++){
            printf("%d", arr[k]);
          }
       
        
    
    }
    
}
void imprimirArray(int arr[],int n){
    for(int k = 0;k<n;k++){
     printf(" %d",arr[k]);
}
}
int main(){
   
   int numero;
   
    printf("Escolha um numero entre 1 a 5 onde \n"
        "1 : bubblesort \n"
        "2 : selectionsort \n"
        "3 : inserctionSort \n"
        "4 : quickSort \n"
        "5 : mergeSort \n"
        );
    scanf("%d",&numero);

    switch(numero){
        case 1:{

       int *arr;
        int n;

        arr = FazerArray(&n);

        bubblesort(arr, n);
        imprimirArray(arr, n);

        break;
        }
        case 2:{
            int *arr;
            int n;

            arr = FazerArray(&n);

            selectionsort(arr, n);
            imprimirArray(arr, n);

            break;
        }
    }
}
