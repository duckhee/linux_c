#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pwd.h>

int main()
{
	struct passwd *pw;

	while(pw = getpwent())
	{
		printf("name : %s, uid: %d, home:%s \r\n", pw->pw_name, pw->pw_uid, pw->pw_dir);
	}

	endpwent();
	return 0;
}

