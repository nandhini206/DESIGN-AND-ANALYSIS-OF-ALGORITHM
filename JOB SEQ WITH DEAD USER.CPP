#include<iostream>
#include<algorithm>
using namespace std;

struct Job {
    char id;
    int dead;
    int profit;
};

bool compare(Job a, Job b) {
    return (a.profit > b.profit);
}

void jobschedule(Job arr[], int n) {
    sort(arr, arr + n, compare);
    int result[n];
    bool slot[n];
    for (int i = 0; i < n; i++)
        slot[i] = false;
    for (int i = 0; i < n; i++) {
        for (int j = min(n, arr[i].dead) - 1; j >= 0; j--) {
            if (slot[j] == false) {
                result[j] = i;
                slot[j] = true;
                break;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (slot[i])
            cout << arr[result[i]].id << " ";
    }
}

int main() {
    int n;
    cout << "Enter the number of jobs: ";
    cin >> n;

    Job arr[n];
    for (int i = 0; i < n; i++) {
        cout << "Enter details for Job " << i + 1 << ":\n";
        cout << "Job ID: ";
        cin >> arr[i].id;
        cout << "Deadline: ";
        cin >> arr[i].dead;
        cout << "Profit: ";
        cin >> arr[i].profit;
    }

    cout << "Maximum profit sequence of jobs is --> ";
    jobschedule(arr, n);

    return 0;
}
