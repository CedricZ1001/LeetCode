// �����ж��Ƿ�Ϊ˫ָ�����⣬����ǣ����ж���ͬ��˫ָ�뻹�Ƿ���˫ָ�롣
// ͬ��˫ָ��һ�㱣����Ч�������λ�ò��䣬����˫ָ��һ��ı���Ч�������λ�á�
// ͬ��˫ָ�����Ϊ����õ�����[0��i) �м�Ϊ���������Ҫ������[i, j) �Ҳ�Ϊδ���������[j��array.length)���������ͱ����������ĿҪ���塣
// ͬ��˫ָ���ͨ�ò��裺
// 1. Initialize two pointers i and j ,usually both equal to 0.
// 2. while j < array.length:
//      If we need array[j], then we keep it by assigning array[i] = array[j], and move i forward, make it ready
//			at the next position.
//      Otherwise skip it. We do not need to move i since its spot is not fulfilled.
// 
// ����˫ָ�������Ҳ඼Ϊ����õ�����[0, i) �ͣ�j, array.length), �м�Ϊδ���������[i, j]��
// ����˫ָ���ͨ�ò��裺
// 1. Initialize two pointers i and j, usually i = 0, j = array.length - 1.
// 2. while i < j:
//      Decide what you should do based on the value of array[i] and array[j].
//      Move at least one pointer forward in its direction.
// 
// ˫ָ����Ŀ��
// Container With Most Water(11)
// Trapping Rain Water(42)
// Move Zeros(283)
// Remove Duplicates from Sorted Array ��(80)
// Remove All Adjacent Duplicates In String(1047)

#pragma once
int main() 
{
	return 0;
}