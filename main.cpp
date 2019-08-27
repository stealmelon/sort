//
//  main.cpp
//  sort
//
//  Created by s20181106115 on 2019/8/27.
//  Copyright © 2019 s20181106115. All rights reserved.
//

#include <iostream>
using namespace std;
void BubbleSort(int *a, int l);
int main(int argc, const char * argv[]) {
    int n;
    cin >> n;
    int a[n];
    int *p;
    p = a;
    for(int i = 0; i < 10; i++)
    {
        cin >> *(p + i);
    }
    BubbleSort(a, n);
    for(int i = 0; i < 10; i++)
    {
        cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}
void BubbleSort(int *a, int l)
{
    int t;
    for(int i = 0; i < l - 1; i++)
    {
        for(int j = 0; j < l - i - 1; j++)
        {
            if(a[j] > a[j + 1])
            {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}

