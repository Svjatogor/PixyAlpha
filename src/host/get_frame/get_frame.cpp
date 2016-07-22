#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <string.h>
#include "pixy.h"

static bool run_flag = true;

void handle_SIGINT(int unused) {
	run_flag = false;
}

int main (int argc, char * argv[]) {

	int i = 0;
	int pixy_init_status;

	// ctrl+c
	signal(SIGINT, handle_SIGINT);

	printf("This program connect with Pixy and get raw frame in Y format\nlibpixyusb v%s\n", __LIPPIXY_VERSION__);

	// connect to Pixy
	pixy_init_status = pixy_init();
	// test connect
	if (pixy_init_status != 0) {
		printf("Pixy Error connect\n");
		pixy_error(pixy_init_status);
		return pixy_init_status;
	}

	int8_t* frame;
		int32_t response;
		int32_t fourccc;
		int8_t render_flag;
		uint16_t width;
		uint16_t height;
		uint32_t size;
	// Request raw frame
	while(run_flag)
	{
		// request command
		int return_value = pixy_command("cam_getFrame", 
			INT8(0x21),
			INT16(0),
			INT16(0),
			INT16(320), // width
			INT16(200), // height
			END_OUT_ARGS,
			&response,
			&fourccc,
			&render_flag,
			&width,
			&height,
			&size,
			&frame,
			END_IN_ARGS);

		if (return_value == 0) {
			printf("Yes I make response!!!\n%dx%d", width, height);
		}
	}
	pixy_close();

}