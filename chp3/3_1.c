/*
 * modified binsearch
 */

#include <stdio.h>


/* binsearch: find x in v[0] <= v[1] <= ... <= v[n-1] */
int binsearch(int x, int v[], int n){
    int high,low,mid;
    low = 0;
    high = n - 1;
    while(low < high){
    	mid = (low + high) / 2;
	if(x < v[mid]){
	    high = mid;    
	}else{
	    low = mid;
	}
    }
    if(x == v[low] || x == v[high]) return x;
    return -1;
}
