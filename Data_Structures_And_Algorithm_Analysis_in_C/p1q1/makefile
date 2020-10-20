
CC = g++
CXXFLAG = 

DATAFILE = "data_src"

all : run


.PHONY : gendata clean run config edit regendata

run : gendata
	$(CC) $(CXXFLAG) p1q1.cc -o p1q1
	./p1q1 < $(DATAFILE)

config :
	nvim def.h

edit :
	nvim p1q1.cc

gendata :
	$(CC) $(CXXFLAG) data_gen.cc -o DATAFILE_TMP
	./DATAFILE_TMP > $(DATAFILE)
	rm DATAFILE_TMP

regendata :
	rm $(DATAFILE)
	$(CC) $(CXXFLAG) data_gen.cc -o DATAFILE_TMP
	./DATAFILE_TMP > $(DATAFILE)
	rm DATAFILE_TMP


clean :
	-rm $(DATAFILE)
	-rm p1q1
