//
//  main.c
//  HW1Q5
//
//  Created by Jiasheng Li on 8/27/18.
//  Copyright © 2018 Jiasheng Li. All rights reserved.
//

#include <stdio.h>

double getAverage(int A[], int size){
    double ans;
    double Sum = 0;
    int i = 0;
    if (size == 0){
        printf("The length of the array should be more than 0.\n");
        return 0;
    }
    
    for (i = 0; i < size; i++){
        Sum = Sum + A[i];
    }
    
    ans = Sum / size;
    return ans;
}


int main() {
    
    int arr[10] = {-6, -8, -50, -7, -7, 12, 0, 0, 0, 188};
    double ans = getAverage(arr, 10);
    
    printf("The average is ans=%f  \n", ans);
}
