// c++_learning_ch02.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
using namespace std;
#include "swap.h"

/*
函数
*/

int add(int num1, int num2) {
    int sum = num1 + num2;
    return sum;
}

/*
函数的声明，提前告诉编译器函数的存在
函数的声明可以有多次
*/
int max(int a, int b);



int main()
{   
    /*
    if
    
    int score = 0;
    cout << "please input a number" << endl;
    cin >> score;
    cout << "we get : " << score << endl;
    if (score >= 600) {
        cout << "you get a high score!" << endl;
    }
    else if(score>=500){
        cout << "you donot get a high score!" << endl;
    }
    else if (score>400) {
        cout << "good luck see you next time" << endl;
    }
    else {
        cout << "very low score" << endl;
    }
    */
    //三目运算符
    int a = 10;
    int b = 20;
    int c = 0;
    c = a > b ? a : b;
    cout << c << endl;
    /*
    三目运算符返回的是变量，可以继续赋值
    */
    a > b ? a : b = 100;
    cout << a << "  " << b << endl;//b=100

    /*
    switch
    不能表示区间，比if差
    优点：结构清晰，执行效率高
    */
    int score = 8;
    switch (score) {
    case 10:
        cout << "very good" << endl;
        break;
    case 9: 
        cout << "very good" << endl;
        break;
    case 8:
        cout << "good" << endl;
        break;
    case 7:
        cout << "normal" << endl;
        break;
    default:
        cout << "bad" << endl;
    }

    /*
    while
    do whlie---先执行一次循环体，再判断是否符合条件,while后还需要；
    */
    int num = 0;
    while (num < 10) {
        cout << num << endl;
        num++;
    }

    num = 10;
    do {
        cout << num << endl;
        num++;
    } while (num < 10);

    /*
    for
    */
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
    }

    /*
    break
    */
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        if (i == 5) break;
    }
    /*
    continue
    跳过本次为执行的语句执行下一次循环
    */
    for (int i = 0; i < 10; i++) {
        if (i == 5) continue;
        cout << i << endl;
        
    }
    /*
    goto
    */
    cout << "1xxxx" << endl;
    cout << "2xxxx" << endl;
    cout << "3xxxx" << endl;
    cout << "4xxxx" << endl;
    cout << "5xxxx" << endl;
    goto flag;
    cout << "6xxxx" << endl;
    cout << "7xxxx" << endl;
    flag:
    cout << "8xxxx" << endl;

    

    /*
    数组
    数组名可以获得数组长度，内存的首地址
    */
    int arr[5] = { 1,2,3,4,5 };
    cout << size(arr) << endl;//5
    cout << sizeof(arr) << endl;//20 int一个4字节
    cout <<(int) arr << endl;//15726676
    cout <<(int) &arr[1] << endl;//15726680

    /*
    冒泡排序
    */
    int arr1[9] = { 4,2,8,0,5,3,1,7,9 };
    for (int i = 0; i < size(arr1) - 1; i++) {
        for (int j = 0; j < size(arr1) - i - 1; j++) {
            if (arr1[j] > arr1[j + 1]) {
                int temp = arr1[j];
                arr1[j] = arr1[j + 1];
                arr1[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        cout << arr1[i] << " ";
    }
    //二维数组
    int arr2[2][3] =
    {
        {1,2,3},
        {2,3,4}
    };

    int arr3[][3] =//可以省略行数，必须有列数
    {
        1,2,3,4,5,6
    };

    cout << endl;

    /*
    函数的调用
    */
    cout << add(10, 20) << endl;

    /*
    函数的声明
    */
    cout << max(10, 20) << endl;

    /*
    分文件写函数
    1.创建.h文件
    2。创建.cpp文件
    3.在。h文件中写函数的声明
    4.在。cpp文件中写函数的定义
    */
    swap(11, 12);






    system("pause");
}

/*
* 函数的声明
*/
int max(int a, int b) {
    return a > b ? a : b;
}

// 运行程序: Ctrl + F5 或调试 >“开始执行(不调试)”菜单
// 调试程序: F5 或调试 >“开始调试”菜单

// 入门使用技巧: 
//   1. 使用解决方案资源管理器窗口添加/管理文件
//   2. 使用团队资源管理器窗口连接到源代码管理
//   3. 使用输出窗口查看生成输出和其他消息
//   4. 使用错误列表窗口查看错误
//   5. 转到“项目”>“添加新项”以创建新的代码文件，或转到“项目”>“添加现有项”以将现有代码文件添加到项目
//   6. 将来，若要再次打开此项目，请转到“文件”>“打开”>“项目”并选择 .sln 文件
