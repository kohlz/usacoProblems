Farmer John's N cows (1≤N≤100) are standing in a line. The ith cow from the left has label i, for each 1≤i≤N.
Farmer John has come up with a new morning exercise routine for the cows. He tells them to repeat the following two-step process exactly K (1≤K≤10^9) times:

The sequence of cows currently in positions A1…A2 from the left reverse their order (1≤A1<A2≤N).
Then, the sequence of cows currently in positions B1…B2 from the left reverse their order (1≤B1<B2≤N).
After the cows have repeated this process exactly K times, please output the label of the ith cow from the left for each 1≤i≤N.

SCORING:
Test cases 2-3 satisfy K≤100.
Test cases 4-13 satisfy no additional constraints.
INPUT FORMAT (file swap.in):
The first line of input contains N and K. The second line contains A1 and A2, and the third contains B1 and B2.
OUTPUT FORMAT (file swap.out):
On the ith line of output, print the label of the ith cow from the left at the end of the exercise routine.
SAMPLE INPUT:
7 2
2 5
3 7
SAMPLE OUTPUT:
1
2
4
3
5
7
6
Initially, the order of the cows is [1,2,3,4,5,6,7] from left to right. After the first step of the process, the order is [1,5,4,3,2,6,7]. After the second step of the process, the order is [1,5,7,6,2,3,4]. Repeating both steps a second time yields the output of the sample.

Problem credits: Brian Dean

Farmer John 的 N 头奶牛（1≤N≤100）站成一排。对于每一个 1≤i≤N，从左往右数第 i 头奶牛的编号为 i。
Farmer John 想到了一个新的奶牛晨练方案。他让她们重复以下包含两个步骤的过程 K（1≤K≤10^9）次：

当前从左往右数在位置 A1…A2 的奶牛序列反转她们的顺序（1≤A1<A2≤N）。
然后，在当前从左往右数在位置 B1…B2 的奶牛序列反转她们的顺序（1≤B1<B2≤N）。
当奶牛们重复这一过程 K 次后，请对每一个 1≤i≤N 输出从左往右数第 i 头奶牛的编号。

测试点性质：
测试点 2-3 满足 K≤100。
测试点 4-13 没有额外限制。
输入格式（文件名：swap.in）：
输入的第一行包含 N 和 K。第二行包含 A1 和 A2，第三行包含 B1 和 B2。
输出格式（文件名：swap.out）：
在第 i 行输出晨练结束时从左往右数第 i 头奶牛的编号。
输入样例：
7 2
2 5
3 7
输出样例：
1
2
4
3
5
7
6
初始时，奶牛们的顺序从左往右为 [1,2,3,4,5,6,7]。在这一过程的第一步过后，顺序变为 [1,5,4,3,2,6,7]。在这一过程的第二步过后，顺序变为 [1,5,7,6,2,3,4]。再重复这两个步骤各一次可以得到样例的输出。