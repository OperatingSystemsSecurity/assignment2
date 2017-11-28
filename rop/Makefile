CFLAGS = -fno-stack-protector

all: vulnerable

clean:
	rm -f vulnerable

disable-aslr:
	echo 0 > /proc/sys/kernel/randomize_va_space

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
