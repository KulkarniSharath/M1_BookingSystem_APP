
PROJ_NAME = Booking
SRC = code.c project_main.c 
TEST_SRC = test_booking.c unity.c project_main.c
ifdef OS
	RM= del/q
	FixPath= $(subst / ,\,$1)
	EXCE= exe
else
	ifeq ($(shell uname),LINUX)
	RM= rm -rf
    FixPath = $1
	EXEC = exe
	endif
endif

Build : 
	gcc $(SRC) -o $(call FixPath,$ (PROJ_NAME).$(EXEC))
run : Build

	./$(call FixPath,$(PROJ_NAME).$(EXCE))

Build_test : 
	gcc $(TEST_SRC) -o $(call FixPath,$ (PROJ_NAME).$(EXEC))
run_test : Build_test

	./$(call FixPath,$(PROJ_NAME).$(EXCE))



