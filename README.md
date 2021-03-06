# 《程序员面试指南》
使用C++实现左老师书及视频中出现的题目代码
## 目录
- [基础班题目](#基础班题目)
- [进阶班题目](#进阶班题目)
- [栈和队列](#栈和队列)
- [链表问题](#链表问题)
- [字符串问题](#字符串问题)
- [笔试题目](#笔试题目)


# 基础班题目
| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------|:---------------------------:|
|0001| 找出B中不属于A的数并打印|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/findBNotBelongToA.md)|:star:|三种方法：遍历，二分搜索，排序+外排|
|0002|冒泡排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/BubbleSort.md)|:star:|排序，稳定|
|0003|选择排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/SelectionSort.md)|:star:|排序，不稳定|
|0004|插入排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/InsertSort.md)|:star:|排序，稳定|
|0005|递归求数组最大值|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/Recursive_getMax.md)|:star:|递归及递归复杂度分析，master公式|
|0006|归并排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/MergeSort.md)|:star:|排序，递归，分治，稳定|
|0007|求数组的小和|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/smallSum.md)|:star: :star: :star:|归并排序，递归，分治|
|0008|求数组的逆序对|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/print_ReverseOrderPair.md)|:star: :star: :star:|归并排序，递归，类似小和|
|0009|partition|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/partition.md)|:star:|思想用于快排|
|0010|荷兰国旗问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/NetherlandsFlag.md)|:star:|思想用于快排|
|0011|随机快排|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/QuickSort.md)|:star: :star:|排序，递归，partition，不稳定|
|0012|堆排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/HeapSort.md)|:star: :star:|排序，大根堆，不稳定|
|0013|随时找到数据流中的中位数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/MedianHolder.md)|:star: :star: :star: :star:|大根堆，小根堆|
|0014|比较器|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/comparator.md)|:star: :star:|排序的稳定性|
|0015|用数组实现大小固定的队列和栈|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/arrayToStackQueue.md)|:star: :star:|栈，队列|
|0016|设计一个有getMin功能的栈|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/getMin.md)|:star:|栈|
|0017|数组排序之后相邻两数的最大差值|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/maxGap.md)|:star:|桶排序|
|0018|用队列结构实现栈&用栈结构实现队列|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/stackAndQueueConvert.md)|:star: :star:|栈，队列|
|0019|猫狗队列|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/DogCatQueue.md)|:star:|队列，类|
|0020|转圈打印矩阵|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/spiralOrderPrint.md)|:star:|矩阵|
|0021|将正方形矩阵顺时针旋转90度|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/rotateMatrix.md)|:star:|矩阵|
|0022|之字打印矩阵|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/printMatrixZigZag.md)|:star:|矩阵|
|0023|在行和列都排好序的矩阵中找数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/isContainsInMatrix.md)|:star:|矩阵|
|0024|打印两个有序链表的公共部分|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/printCommonPart.md)|:star:|链表|
|0025|判断链表是否为回文结构|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/ListNodeIsPalindrome.md)|:star:|链表|
|0026|将单链表按某值划分为左边小，中间相等，右边大的形式|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/ListPartition.md)|:star: :star:|链表，荷兰国旗|
|0027|复制含有随机指针节点的链表|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/copyListWithRandom.md)|:star: :star:|链表，哈希表|
|0028|两个链表相交的一系列问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/FindFirstIntersectNode.md)|:star: :star: :star: :star:|链表，哈希表|
|0029|二叉树的先序，中序和后序遍历|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/PreInPosTraversing.md)|:star: :star: |二叉树|
|0030|带父节点的二叉树中找到一个节点的后继节点，前驱节点|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/getSuccessorNode.md)|:star: :star: |二叉树|
|0031|二叉树的序列化和反序列化|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/serial.md)|:star: |二叉树，字符串分割函数，stoi，to_string|
|0032|判断是否为平衡二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/isBalanceTree.md)|:star: |二叉树，平衡性|
|0033|判断是否为搜索二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/isBST.md)|:star: |搜索二叉树|
|0034|判断是否为完全二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/isCBT.md)|:star: |完全二叉树|
|0035|求完全二叉树的节点个数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/nodeNum.md)|:star: :star:|完全二叉树，递归|
|0036|设计RandomPool结构|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/RandomPool.md)|:star: :star:|哈希表，类|
|0037|实现并查集结构|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/unionFind.md)|:star: :star:|哈希表，类|
|0038|岛问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/Islands.md)|:star: :star:|并查集，DFS|
|0039|实现前缀树结构|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/TrieTree.md)|:star: :star:|前缀树|
|0040|拼接所有字符串产生字典序最小的字符串|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/LowestLexicography.md)|:star: :star:|字符串比较，比较器，贪心|
|0041|分金条问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/LessMoney.md)|:star: :star:|哈夫曼编码，最小代价，小根堆，贪心|
|0042|IPO问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/IPO.md)|:star: :star:|贪心，大根堆，小根堆，比较器|
|0043|安排会议室宣讲问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/BestArrange.md)|:star: :star:|贪心，比较器|
|0044|n的阶乘|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/Factorial.md)|:star:|暴力递归|
|0045|汉诺塔问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/hanoi.md)|:star: :star: :star:|递归|
|0046|打印字符串的全部子序列|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/printAllSubsquences.md)|:star: :star:|递归|
|0047|打印字符串的全排列|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/printAllPermutations.md)|:star: :star:|递归|
|0048|:cow:母牛问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/cow.md)|:star:|递归|
|0049|最小路径和|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/minPath.md)|:star: :star:|递归，动态规划|
|0050|数组中任意个数的累加能否得到aim|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/isSumAim.md)|:star: :star:|递归，动态规划|

# 进阶班题目

| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------:|:---------------------------:|
|0001|生成窗口最大值数组|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/getWindowsMaxArr.md)|:star: :star:|窗口|
|0002|最大值减去最小值小于或等于num的子数组数量|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/getSubarrayNum.md)|:star: :star: :star:|窗口|
|0003|找到无序数组中最小的k个数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/bfprt.md)|:star: :star: :star: :star:|bfprt|
|0004|单调栈结构|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/getNearLess.md)|:star: :star:|单调栈|
|0005|maxTree|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxTree.md)|:star: :star:|单调栈，大根堆，哈希表|
|0006|求最大子矩阵的大小|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxRectSize.md)|:star: :star: :star:|单调栈|
|0007|可见的山峰对数量|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/getVisibleNum.md)|:star: :star: :star: :star:|单调栈|
|0008|二叉树的Moris遍历|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/Moris.md)|:star: :star: :star: :star:|二叉树，遍历|
|0009|大楼轮廓问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/TreeMap.md)|:star: :star: :star: :star:|平衡搜索二叉树，map，比较器|
|0010|未排序数值中累加和为给定值的最长子数组系列问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/aimMaxLength.md)|:star: :star:|map，子数组|
|0011|子数组异或和为0的最多划分|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/mostEOR.md)|:star: :star: :star:|map，子数组|
|0012|求最大搜索二叉树的大小|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxBST.md)|:star: :star: :star:|树形dp|
|0013|二叉树节点间的最大距离|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxDistance.md)|:star: :star:|树形dp|
|0014|派对的最大快乐值|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxHappy.md)|:star: :star: :star:|树形dp|
|0015|判断二叉树是否为平衡二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/isBalance.md)|:star: :star:|树形dp|
|0016|判断二叉树是否为搜索二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/isBST.md)|:star: :star:|中序遍历，Moris|
|0017|判断二叉树是否为完全二叉树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/isCBT.md)|:star: :star:|按层遍历|
|0018|字符串包含问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/strStrKMP.md)|:star: :star: :star: :star:|KMP算法|
|0019|扩展字符串使包含两个原始串|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/extendStr.md)|:star: :star:|KMP算法, next数组|
|0020|判断t1树中是否有与t2树拓扑结构完全相同的子树（子树包含问题）|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/isSubTree.md)|:star: :star: :star:|KMP算法, next数组, find|
|0021|子数组的最大异或和|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/maxXOR.md)|:star: :star: :star:|字典树|
|0022|排成一条线的纸牌博弈问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/win.md)|:star: :star: :star:|动态规划|
|0023|未排序正数组累加和等于给定值的子数组|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/aimMaxLength2.md)|:star:|双指针，窗口|
|0024|未排序正数组累加和小于等于给定值的子数组|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter01_AdvancedVideo/aimMaxLength3.md)|:star: :star: :star: :star:|辅助数组，窗口|












# 栈和队列

| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------:|:---------------------------:|
|1012| 将单链表的每K个节点之间逆序|[查看题解]() |:star: :star|栈，链表|

<br>[:top:回到顶部](#程序员面试指南)

# 链表问题


| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------:|:---------------------------:|
|1001| 设计一个有getMin功能的栈|[查看题解]() |:star:|栈|

<br>[:top:回到顶部](#程序员面试指南)

# 字符串问题
| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------:|:---------------------------:|
|0001|判断两个字符串是否为变形词|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter06_String/01isDeformation.md)|:star:|哈希表|
|0007|字符串的调整与替换|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter06_String/07replace.md)|:star:|逆序复制，空字符|


<br>[:top:回到顶部](#程序员面试指南)

# 笔试题目
| ID | Title                                  |           C++             |      难度       |          备注               |
|:--:|:--------------------------------------:|:-------------------------:|:---------------:|:---------------------------:|
|0001|拼多多-最大乘积|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/1.md)|:star: :star: :star:||
|0002|拼多多-大整数相乘|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/2.md)|:star: :star: :star:||
|0003|拼多多-六一儿童节|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/3.md)|:star: :star: :star:||
|0004|拼多多-迷宫寻路|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/4.md)|:star: :star: :star:||
|0005|拼多多-回合制游戏|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/5.md)|:star: :star: :star:||
|0006|拼多多-两两配对差值最小|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/6.md)|:star: :star: :star:||
|0007|拼多多-选靓号|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/7.md)|:star: :star: :star:|段错误，通过90%|
|0008|拼多多-种树|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/8.md)|:star: :star: :star:|超时，通过90%|
|0009|拼多多-列表补全|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/9.md)|:star: :star: :star:||
|0010|拼多多-数三角形|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/10.md)|:star: :star: :star:||
|0011|拼多多-小熊吃糖|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/pdd/11.md)|:star: :star: :star:||
|0012|浪潮-考古遗迹|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/lc/1.md)|:star: :star: :star:|通过率为0|
|0013|浪潮-铺地砖|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/lc/2.md)|:star: :star: :star:|整型相乘溢出|
|0014|猿辅导-大巴车|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/yfd/1.md)|:star: :star: :star:||
|0015|猿辅导-拍照队形|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/yfd/2.md)|:star: :star: :star:|含有空格的字符串输入|
|0016|猿辅导-解压缩字符串|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/yfd/3.md)|:star: :star: :star:|递归，定义返回类型|
|0017|猿辅导-击鼓传花|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/yfd/4.md)|:star: :star: :star:||
|0018|贝壳-音乐列表|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/4.md)|:star: :star: :star:|动态规划，排列组合|
|0019|贝壳-倒水|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/3.md)|:star: :star: :star:|动态规划，排列组合|
|0019|贝壳-小明卖食物|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/2.md)|:star: :star: :star:|双指针|
|0020|贝壳-乔乔的包|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/1.md)|:star: :star: :star:|比较器|
|0021|贝壳-斐波那契数列|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/5.md)|:star:||
|0022|中兴-工资频率|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/1.md)|:star:||
|0022|中兴-树路径乘积最大值(非二叉树)|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/2.md)|:star:||
|0022|中兴-苹果最多的路径（非二叉树）|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/3.md)|:star:|树形dp|
|0023|中兴-单词接龙|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/4.md)|:star:|char**|
|0023|中兴-完全数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/5.md)|:star:||
|0023|中兴-反应堆|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/zx/6.md)|:star:||
|0024|华为-字符串最后一个单词的长度|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/1.md)|:star:||
|0025|华为-计算字符个数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/2.md)|:star:||
|0026|华为-明明的随机数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/3.md)|:star:||
|0027|华为-字符串分隔|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/4.md)|:star:||
|0028|华为-进制转换|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/5.md)|:star:||
|0029|华为-质数因子|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/6.md)|:star:||
|0030|华为-取近似值|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/7.md)|:star:||
|0031|华为-合并表记录|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/8.md)|:star:||
|0032|华为-提取不重复的整数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/9.md)|:star:||
|0033|华为-字符个数统计|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/10.md)|:star:||
|0034|华为-数字颠倒|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/11.md)|:star:||
|0035|华为-字符串反转|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/12.md)|:star:||
|0036|华为-句子逆序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/13.md)|:star:||
|0037|华为-字串的连接最长路径查找|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/14.md)|:star:|对n个字符串按照字典序排列|
|0038|华为-求int型正整数在内存中存储1的个数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/15.md)|:star:||
|0039|华为-购物单|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/16.md)|:star:|90|
|0040|华为-坐标移动|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/17.md)|:star:||
|0041|华为-识别有效的IP地址和掩码并进行分类|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/18.md)|:star:||
|0042|华为-简单错误记录|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/19.md)|:star:||
|0043|华为-密码验证合格程序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/20.md)|:star:|strstr|
|0043|华为-简单密码破解|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/21.md)|:star:||
|0044|华为-汽水瓶|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/22.md)|:star:||
|0045|华为-删除字符串中出现次数最少的字符|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/23.md)|:star:||
|0046|华为-合唱队|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/24.md)|:star:||
|0047|华为-数据分类处理|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/25.md)|:star:||
|0048|华为-字符串排序|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/26.md)|:star:||
|0049|华为-查找兄弟单词|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/27.md)|:star:||
|0050|华为-素数伴侣|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/28.md)|:star:||
|0051|华为-字符串解加密|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/29.md)|:star:||
|0052|华为-字符串合并处理|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/30.md)|:star:||
|0053|华为-单词倒排|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/31.md)|:star:|注意空格|
|0054|华为-字符串运用-密码截取|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/32.md)|:star:|最长回文|
|0055|华为-整数与ip地址间的转换|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/33.md)|:star:||
|0056|华为-图片整理|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/34.md)|:star:||
|0057|华为-蛇形矩阵|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/35.md)|:star:||
|0058|华为-字符串加密|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/36.md)|:star:||
|0059|华为-统计每个月兔子的总数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/37.md)|:star:||
|0060|华为-求小球落地5次后所经历的路程和第五次反弹的高度|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/38.md)|:star:||
|0061|华为-判断两个ip是否属于同一子网|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/39.md)|:star:||
|0062|华为-输入一行字符，分别 统计出英文字母，空格，数字和其他字符个数|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/40.md)|:star:||
|0063|华为-称砝码|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/41.md)|:star:||
|0064|华为-学英语|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/42.md)|:star:||
|0064|华为-迷宫问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/hw/43.md)|:star:||
|0065|贝壳-爬楼梯问题|[题解](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter10/bk/6.md)|:star:||