CC = gcc

SRCS = 22_1.c 22_2.c 22_3.c 22_4.c 22_5.c 22_6.c 22_7.c 22_8.c 22_9.c \
	   22_10.c 22_11.c 22_12.c 22_13.c 22_14.c

BUILDDIR = build

COBJS = $(addprefix $(BUILDDIR)/, $(SRCS:.c=.o))

CFLAGS = -g

all: clean createdirs $(COBJS)

createdirs:
	$(shell mkdir ${BUILDDIR})

$(COBJS): $(BUILDDIR)/%.o : %.c
	$(CC) $(CFLAGS) $< -o $@

clean:
	rm -rf $(BUILDDIR)

