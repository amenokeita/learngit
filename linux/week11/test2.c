#include "my.h"
void pr_exit(int s, pid_t pid)
{
	int sig;
	if(WIFEXITED(s))
		printf("process %d normal termination, exit status=%d\n",pid,WEXITSTATUS(s));
	else if(WIFSIGNALED(s))
		{
			sig = WTERMSIG(s);
			printf("process %d abnormal termination, signal number=%d%s\n",pid,sig, 
				#ifdef WCOREDUMP
						WCOREDUMP(s)?"core file generated":"");
				#else
						"");
				#endif
						psignal(sig, "");
		}
	else if(WIFSTOPPED(s))
		{
			sig = WTERMSIG(s);
			printf("process %d stopped , signal number=%d:\n",pid,sig);
		}
	else
		{
			
		}
}
int main(){
	int pid,s,zero =0;
	if((pid=fork())<0)
		{
			perror("failed to fork!");
		}
	if((pid=fork()==0))
		{
			abort();
		} 
	if((pid=fork()==0))
		{
			s=s/zero;
			exit(0);
		} 
	/*pid1=wait(&s1);
	pid2=wait(&s2);
	pid3=wait(&s3);
	pr_exit(s1,pid1);
	pr_exit(s2,pid2);
	pr_exit(s3,pid3);*/
	while((pid=wait(&s))>0)
			pr_exit(s,pid);
	perror("wait over1\n");



	exit(0);
}

