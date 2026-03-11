#include <stdio.h>

int main() {
    int m, n;
    scanf("%d %d", &m, &n);

    int nums1[m], nums2[n];

    for(int i = 0; i < m; i++)
        scanf("%d", &nums1[i]);
    for(int i = 0; i < n; i++)
        scanf("%d", &nums2[i]);

    int printed[1000] = {0}; // To track already printed elements

    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            if(nums1[i] == nums2[j] && !printed[nums1[i]]) {
                printf("%d ", nums1[i]);
                printed[nums1[i]] = 1;
                break;
            }
        }
    }

    return 0;
}
