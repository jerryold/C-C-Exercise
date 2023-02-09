#include<stdlib.h>
#include<stdio.h>
#define IBM_NB 32000
#define ACER_NB 30000
#define MSG1 " \n IBM Notebook's price:%d"
#define MSG2 " \n IBM_NB未定義"
#define MSG3 " \n ACER Notebook's price:%d"
int main()
{
    #ifdef IBM_NB
		printf(MSG1, IBM_NB);
	#else
		printf(MSG2, ACER_NB);
	#endif

	#undef IBM_NB //取消第三行的IBM_NB

	#ifndef IBM_NB
		printf(MSG2);
	#else
		printf(MSG3, ACER_NB);
	#endif 
	printf("\n\n");
	system("pause");
	return 0;


}