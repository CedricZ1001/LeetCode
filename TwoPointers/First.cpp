//3. ���ظ��ַ�����Ӵ�
//����һ���ַ��� s �������ҳ����в������ظ��ַ��� ��Ӵ��ĳ��ȡ�
//
//ʾ�� 1:
//
//����: s = "abcabcbb"
//��� : 3
//���� : ��Ϊ���ظ��ַ�����Ӵ��� "abc"�������䳤��Ϊ 3��
//ʾ�� 2 :
//
//���� : s = "bbbbb"
//��� : 1
//���� : ��Ϊ���ظ��ַ�����Ӵ��� "b"�������䳤��Ϊ 1��
//ʾ�� 3 :
//
//���� : s = "pwwkew"
//��� : 3
//���� : ��Ϊ���ظ��ַ�����Ӵ��� "wke"�������䳤��Ϊ 3��
//��ע�⣬��Ĵ𰸱����� �Ӵ� �ĳ��ȣ�"pwke" ��һ�������У������Ӵ���
//
//��ʾ��
//
//0 <= s.length <= 5 * 104
//s ��Ӣ����ĸ�����֡����źͿո����
#include"../Algorithm/Header.h"

class First {
public:
	static int lengthOfLongestSubstring(string s) {
		unordered_set<char> hashSet;
		int maxLength = 0;
		int left = 0, right = 0;
		while (right < s.size() && left <= right) {
			if (hashSet.count(s[right]) == 0) {
				hashSet.emplace(s[right]);
			}
			else {
				while (s[left] != s[right]) {
					hashSet.erase(s[left]);
					left++;
				}
				if (left < right) {
					left++;
				}
			}
			maxLength = max(maxLength, right - left + 1);
			++right;
		}
		return maxLength;
	}
};
