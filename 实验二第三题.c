//3����дһ�������������ض�ά�������� (3��3) ����������������±ꡣ
//���������ж���һ����ά���鲢��ʼ�������ú����������������±ꡣ 
//      (��ʾ��ʹ��2����������� 

#include<stdio.h>
#include<math.h>
int sc(int b[3][3],int xb[2]); 
int main(){
	int a[3][3];
	int i,j,max,xb[2];;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand();
			//α��������3x3�����顣 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\n",a[i][j]);
		}
	}
	max=sc(a,xb);
	printf("�����Ϊ��%d\n�±�Ϊ:%d %d",max,xb[0],xb[1]);
	return 0;
}
int sc(int b[3][3],int xb[2]){
	int i,j,max;
	max=b[0][0];
	xb[0]=0;
	xb[1]=1;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			if (max<b[i][j]){
				max=b[i][j];
				xb[0]=i;
				xb[1]=j;
			}
		}
	}
	return max;
}
