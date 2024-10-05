#include <iostream>
#include <cstdlib>
#include <ctime>

void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main() {
    // 设置种子以确保每次运行时生成的随机数不同
    srand(time(0));

    // 生成随机数并存储在数组中
    const int n = 100;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100 + 1;  // 生成1到100的随机数
    }

    // 打印未排序的数组
    std::cout << "未排序的数组:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    // 使用冒泡排序对数组进行排序
    bubbleSort(numbers, n);

    // 打印排序后的数组
    std::cout << "\n\n排序后的数组:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
