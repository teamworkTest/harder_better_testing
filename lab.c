#include<stdio.h>

void set_number(int *source, int val){ 
	if ( *source != val)
		*source = val;
	return;
}


int main(){ 
	
	int number = 10;
	/* ���N�ӌ�һ�� function �� number �ĳ�����Ҫ�ĵ�ֵ�� */


	/* Ո���Լ����뷨�f�������@�� code ����˼ */
	char *str = "hello world";
	
	while ( *str ) { 
		printf("%c\n", *str++);
	}
	/* str ��һ��ָ�� "hello world"  ��ָ��
	 * *str ����ȡָ��ָ��ă��ݣ�һ�_ʼ *str �� 'h'
	 * ���� printf function ��ӡ��ÿ����Ԫ����
	 * str++ �@������������һ�� statements ����֮ǰ���
	 * ���� ֮�� str ��ָ��ͬ����һ����Ԫ��
	 *
	 * ����������ԭ�� str = 0x11223344 ( 64-bit machine )
	 * str++ = 0x11223345 ���� *str ����ȡ����ӛ���w 0x11223345 λַ����ŵă��� */








	/* �����@�� code �� str2 ��һ��ָ�� char ��ָ��
	 * ��ֻ�����ִ� "hello world" �ĵ�һ��λַ
	 * ���@�e "hello world" ���������� .text ��λ��
	 * ������һ�� const �̈́e��Ψ�x�ִ��������M���κ��޸�
	 * ���� pointer to char : str2 �s����һֱ�Ƅ�
	 */

	char *str2 = "hello world";
	int i = 0;
	while ( i < 100 ){ 
		printf("%c\n", *str2++);
	}
	return 0;

}
