#include <stdio.h>
#include <windows.h>
#define _TIMESPEC_DEFINED
#include "pthread.h"

#pragma comment(lib, "pthreadVC2.lib")

void *thread(void *thread_id) {

	for (int i = 0; i < 20; i++) {
		printf(".");
		Sleep(200);
	}

	return NULL;
}

int main() {
	pthread_t worker;
	pthread_create(&worker, NULL, thread, (char *)"Worker");
	for (int i = 0; i < 20; i++) {
		printf("M");
		Sleep(300);
	}
}
