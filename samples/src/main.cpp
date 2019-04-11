#include "record.cpp"

#include "ALSADevices.hpp"
#include "constants.h"
#include <iostream>
#include "kws.h"

#include <pthread.h>


int main(){

	int ret;
	struct kws_s kws1;
	pthread_t tid;
	ret = kws_start(&kws1);
	int *a = 0;
	pthread_create(&tid,NULL,record_routine,&a);
	while(1);

return 0;

}
