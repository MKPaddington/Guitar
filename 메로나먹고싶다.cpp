#include <stdio.h>
main()
{
	int a;
	printf("����� � ������ �����Ͻó���?\n1�� ������, 2�� �����Ƹ�, 3�� �����, 4�� �޷��Դϴ�.\n");
	scanf("%d",&a);

	switch (a)
	{
	case 1:
		printf("����� ������ �����Ͻô±���!");
		break;
	case 2:
		printf("����� �����Ƹ� �����Ͻô±���!"); 
		break;
	case 3:
		printf("����� ����� �����Ͻô±���!");
	break;
	case 4: 
	printf("����� �޷��� �����Ͻô±���!");
	break;
}
}
