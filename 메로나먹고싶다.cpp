#include <stdio.h>
main()
{
	int a;
	printf("당신은 어떤 과일을 좋아하시나요?\n1은 수박을, 2는 복숭아를, 3은 사과를, 4는 메론입니다.\n");
	scanf("%d",&a);

	switch (a)
	{
	case 1:
		printf("당신은 수박을 좋아하시는군요!");
		break;
	case 2:
		printf("당신은 복숭아를 좋아하시는군요!"); 
		break;
	case 3:
		printf("당신은 사과를 좋아하시는군요!");
	break;
	case 4: 
	printf("당신은 메론을 좋아하시는군요!");
	break;
}
}
