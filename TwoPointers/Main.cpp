// 首先判断是否为双指针问题，如果是，再判断是同向双指针还是反向双指针。
// 同向双指针一般保持有效数据相对位置不变，反向双指针一般改变有效数据相对位置。
// 同向双指针左侧为处理好的数据[0，i) 中间为处理过不需要的数据[i, j) 右侧为未处理的数据[j，array.length)。三个开和闭区间根据题目要求定义。
// 同向双指针的通用步骤：
// 1. Initialize two pointers i and j ,usually both equal to 0.
// 2. while j < array.length:
//      If we need array[j], then we keep it by assigning array[i] = array[j], and move i forward, make it ready
//			at the next position.
//      Otherwise skip it. We do not need to move i since its spot is not fulfilled.
// 
// 反向双指针左侧和右侧都为处理好的数据[0, i) 和（j, array.length), 中间为未处理的数据[i, j]。
// 反向双指针的通用步骤：
// 1. Initialize two pointers i and j, usually i = 0, j = array.length - 1.
// 2. while i < j:
//      Decide what you should do based on the value of array[i] and array[j].
//      Move at least one pointer forward in its direction.
// 
// 双指针题目：
// Container With Most Water(11)
// Trapping Rain Water(42)
// Move Zeros(283)
// Remove Duplicates from Sorted Array Ⅱ(80)
// Remove All Adjacent Duplicates In String(1047)

#pragma once
int main() 
{
	return 0;
}