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
    // ����������ȷ��ÿ������ʱ���ɵ��������ͬ
    srand(time(0));

    // ������������洢��������
    const int n = 100;
    int numbers[n];
    for (int i = 0; i < n; i++) {
        numbers[i] = rand() % 100 + 1;  // ����1��100�������
    }

    // ��ӡδ���������
    std::cout << "δ���������:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    // ʹ��ð������������������
    bubbleSort(numbers, n);

    // ��ӡ����������
    std::cout << "\n\n����������:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cout << numbers[i] << " ";
    }

    return 0;
}
