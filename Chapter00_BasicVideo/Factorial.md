## n的阶乘
[完整代码](https://github.com/ludandandan/Programmer-interview-guide/blob/master/Chapter00_BasicVideo/Factorial.cpp)

**题目：**
> 用递归和非递归方法求n的阶乘。

> 暴力递归：
> 1. 把问题转化为规模缩小里的同类问题的子问题。
> 2. 有明确的不需要继续进行递归的条件(base case)。
> 3. 有当得到里子问题的结果之后的决策过程。
> 4. 不记录每一个子问题的解。

> 动态规划：
> 1. 从暴力递归中来。
> 2. 把每个子问题的解记录下来，避免重复计算。
> 3. 把暴力递归的过程抽象成里状态表达。
> 4. 并且存在化简状态表达，使其更加简洁的可能。

> 这道题目非递归的方式就是从1一直乘到n。注意n=0是返回1。
> 递归方式是反过来，要求n的阶乘只需n乘上n-1的阶乘，而n-1的阶乘又依赖n-2的阶乘，一直到1的阶乘，也就到达里base case。
> 非递归的过程是我知道怎么算，让计算机给我计算。而递归是我不知道怎么算，但我知道怎么试，让计算机给我试出最好的答案。递归的过程也就是试的过程。
```c++
int factorial(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    int res = 1;
    for(int i=1; i<=n; i++)
    {
        res = res*i;
    }
    return res;
}

int factorialRecur(int n)
{
    if(n==0) return 1;
    if(n==1) return 1;
    return n*factorialRecur(n-1);
}
```