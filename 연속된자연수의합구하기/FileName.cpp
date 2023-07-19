#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;
    int count = 1; // ����� ��(=�츮�� ���ϴ� ���) ���� �ڽ��� �̸� ī��Ʈ

    int start_index = 1;
    int end_index = 1;
    int sum = 1;
     
    while (end_index != N) // end_index == N �� ���(�����ڽ�_�� ����, count�� �ʱⰪ�� 1�� ����
    {
        
        if (sum == N) {
            count++;
            //start_idx,end_idx -> sum
            end_index++;
            sum = sum + end_index;

        }
        else if (sum > N) {
            sum = sum - start_index;
            start_index++;


        }
        else { // sum < N
            end_index++;
            sum = sum + end_index;
        }
    }
    cout << count << "\n";
}