CPPFLAGS+=-I/softslin/catapultc10_1b/Mgc_home/shared/include/ -I../ac_fixed/ 

DispProcTest_bench : DispProcTest.o DispProcTest_bench.o
	g++ -o DispProcTest_bench DispProcTest.o DispProcTest_bench.o


clean:
	rm -f DispProcTest.o DispProcTest_bench.o DispProcTest_bench img_out.pgm
	rm -rf Catapult* catapult.log design_checker*
