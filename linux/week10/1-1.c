#include "my.h"
#define BUFSIZE 1024//标准流管道
static void fun1(void)
{
	printf("invoked callbackfun!\n");
}

main()
{
	FILE *fp;
	char buf[] = "HELLO   ";
	const char *cmd = "ps x";
	printf("%s",buf);
	if (NULL == (fp = popen(cmd, "r")))perror("popen"), exit(EXIT_FAILURE);
		int readlen = 0;
while ((readlen = fread(buf, sizeof(char), BUFSIZE, fp)) > 0)

 {

buf[readlen] = '\0';

       

fwrite(buf, sizeof(char), readlen, fp);

}

	//关闭文件指针

	pclose(fp);
	exit(0);
}
