//常用排序算法

#include <stdio.h>
#include <stdlib.h>

//==============冒泡排序=======================

void bubble_sort(int arr[], int len) {
    int i, j, temp;
    for (i = 0; i < len - 1; i++)
        for (j = 0; j < len - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
}

int testBubble() {
    int arr[] = { 22, 34, 3, 32, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70 };
    int len = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr, len);
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
       
    return 0;
}



//==============选择排序=======================
void swap(int *a,int *b) //交換兩個變數
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void selection_sort(int arr[], int len) 
{
    int i,j;

    for (i = 0 ; i < len - 1 ; i++) 
    {
        int min = i;
        for (j = i + 1; j < len; j++)     //走訪未排序的元素
            if (arr[j] < arr[min])    //找到目前最小值
                min = j;    //紀錄最小值
                swap(&arr[min], &arr[i]);    //做交換
    }
    
   for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}

void testSelect(){
    int length = 10;
    int list1[]={1,3,5,7,9,2,4,6,8,0};
    selection_sort(list1,length);    

}

//==============插入排序=======================

void insertion_sort(int arr[], int len){
    int i,j,key;
    for (i=1;i<len;i++){
        key = arr[i];
        j=i-1;
        while((j>=0) && (arr[j]>key)) {
            arr[j+1] = arr[j];
            j--;
        }
            arr[j+1] = key;
        }
}

void testInsert(){
    int length = 10;
    int list1[]={1,3,5,7,9,2,4,6,8,0};
    selection_sort(list1,length);    

}

//==============快速排序=======================
typedef struct _Range {
    int start, end;
} Range;

Range new_Range(int s, int e) {
    Range r;
    r.start = s;
    r.end = e;
    return r;
}

void swap_quick(int *x, int *y) {
    int t = *x;
    *x = *y;
    *y = t;
}

void quick_sort(int arr[], const int len) {
    int i;
    if (len <= 0)
        return; // 避免len等於負值時引發段錯誤（Segment Fault）
    // r[]模擬列表,p為數量,r[p++]為push,r[--p]為pop且取得元素
    Range r[len];
    int p = 0;
    r[p++] = new_Range(0, len - 1);
    while (p) {
        Range range = r[--p];
        if (range.start >= range.end)
            continue;
        int mid = arr[(range.start + range.end) / 2]; // 選取中間點為基準點
        int left = range.start, right = range.end;
        do {
            while (arr[left] < mid) ++left;   // 檢測基準點左側是否符合要求
            while (arr[right] > mid) --right; //檢測基準點右側是否符合要求
            if (left <= right) {
                swap_quick(&arr[left], &arr[right]);
                left++;
                right--;               // 移動指針以繼續
            }
        } while (left <= right);
        if (range.start < right) r[p++] = new_Range(range.start, right);
        if (range.end > left) r[p++] = new_Range(left, range.end);
    }

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
}


void testQuick(){
    int length = 10;
    int list1[]={1,3,5,7,9,2,4,6,8,0};
    quick_sort(list1,length);    

}

//==============归并排序=======================

int min(int x, int y) {
    return x < y ? x : y;
}
void merge_sort(int arr[], int len) {
    int i;
    int *a = arr;
    int *b = (int *) malloc(len * sizeof(int));
    int seg, start;
    for (seg = 1; seg < len; seg += seg) {
        for (start = 0; start < len; start += seg * 2) {
            int low = start, mid = min(start + seg, len), high = min(start + seg * 2, len);
            int k = low;
            int start1 = low, end1 = mid;
            int start2 = mid, end2 = high;
            while (start1 < end1 && start2 < end2)
                b[k++] = a[start1] < a[start2] ? a[start1++] : a[start2++];
            while (start1 < end1)
                b[k++] = a[start1++];
            while (start2 < end2)
                b[k++] = a[start2++];
        }
        int *temp = a;
        a = b;
        b = temp;
    }
    if (a != arr) {
        int i;
        for (i = 0; i < len; i++)
            b[i] = a[i];
        b = a;
    }
    
    free(b);

    for (i = 0; i < len; i++)
    {
        printf("%d ", arr[i]);
    }
   
}

void testMerge(){
    int length = 10;
    int list1[]={1,3,5,7,9,2,4,6,8,0};
    merge_sort(list1,length);    

}

int main(){
    //testBubble(); //冒泡排序
    //testSelect(); //选择排序
    //testInsert(); //插入排序
    //testQuick();  //快速排序
    testMerge();    //归并排序
}