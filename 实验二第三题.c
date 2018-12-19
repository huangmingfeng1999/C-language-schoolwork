//3．编写一个函数，它返回二维整型数组 (3×3) 的最大数及该数的下标。
//在主函数中定义一个二维数组并初始化，调用函数后输出最大数及下标。 
//      (提示：使用2个数组参数） 

#include<stdio.h>
#include<math.h>
int sc(int b[3][3],int xb[2]); 
int main(){
	int a[3][3];
	int i,j,max,xb[2];;
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			a[i][j]=rand();
			//伪随机数填充3x3的数组。 
		}
	}
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("%d\n",a[i][j]);
		}
	}
	max=sc(a,xb);
	printf("最大数为：%d\n下标为:%d %d",max,xb[0],xb[1]);
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
