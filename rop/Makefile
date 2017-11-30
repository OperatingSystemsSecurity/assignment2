CFLAGS = -fno-stack-protector

all: vulnerable vulnerable_small_buffer

clean:
	rm -f vulnerable{,_small_buffer}

disable-aslr:
	sudo tee /proc/sys/kernel/randomize_va_space <<< "0"

%: %.c
	$(CC) $(CFLAGS) -o $@ $<
