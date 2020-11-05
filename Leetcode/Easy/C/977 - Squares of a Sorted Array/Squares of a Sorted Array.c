#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* A, int ASize, int* returnSize){
    int negativePointer = 0;
    int positivePointer = 0;
    int *squares = malloc(ASize * sizeof(int));
    int squaresAdded = 0;

    while(A[negativePointer] < 0){
        negativePointer++;
    }
    positivePointer = negativePointer + 1;
 
    while(negativePointer >= 0 || positivePointer < ASize){
        int negativeSquare = A[negativePointer] * A[negativePointer];
        int positiveSquare = A[positivePointer] * A[positivePointer];
        if(negativeSquare < positiveSquare){
            *(squares + squaresAdded * sizeof(int)) = negativeSquare;
            negativePointer--;
            squaresAdded++;
        }
        if(negativeSquare >= positiveSquare){
            *(squares + squaresAdded * sizeof(int)) = positiveSquare;
            positivePointer++;
            squaresAdded++;
        }
        if(negativePointer < 0){
            while(positivePointer < ASize){
                positiveSquare = A[positivePointer] * A[positivePointer];
                *(squares + squaresAdded * sizeof(int)) = positiveSquare;
                positivePointer++;
                squaresAdded++;
            }
            break;
        }
        if(positivePointer >= ASize){
            while(negativePointer < ASize){
                negativeSquare = A[negativePointer] * A[negativePointer];
                *(squares + squaresAdded * sizeof(int)) = negativeSquare;
                negativePointer++;
                squaresAdded++;
            }
            break;
        }
    }
    return squares;

    /*
        int *sortedSquares(int *A, int ASize, int *returnSize)
        {
            *returnSize = ASize;
            int *ret = malloc(sizeof(int) * ASize);
            int neg_idx = -1;
            for (int i = 0; i < ASize; i++) {
                if (A[i] < 0)
                    neg_idx++;
                A[i] = A[i] * A[i];
            }

            int pos_idx = neg_idx + 1, ctr = 0;
            while (neg_idx >= 0 && pos_idx < ASize) {
                if (A[neg_idx] > A[pos_idx])
                    ret[ctr++] = A[pos_idx++];
                else
                    ret[ctr++] = A[neg_idx--];
            }

            while (neg_idx >= 0)
                ret[ctr++] = A[neg_idx--];

            while (pos_idx < ASize)
                ret[ctr++] = A[pos_idx++];

            return ret;
        }
     */
}

int main(){
    int n1[5] = {-4, -1, 0, 3, 10};
    int s;
    sortedSquares(n1, 5, &s);
    return 0;
}