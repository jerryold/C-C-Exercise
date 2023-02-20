//volatile:確保編譯器最佳化,讀取順序不會錯亂
//讀取 i 並寫入 a」和「讀取 j 並寫入 b」這兩組操作被 barrier 所隔離
#define _READ_ONCE(x) (*(const volatile int *)&(x))

int a, b;
int i, j;

void foo()
{
	a = _READ_ONCE(i);
	b = _READ_ONCE(j) / 16;

}