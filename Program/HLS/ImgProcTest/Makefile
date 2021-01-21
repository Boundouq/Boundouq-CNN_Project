CPPFLAGS+=-I/softslin/catapultc10_1b/Mgc_home/shared/include/ -I../ac_fixed/ 

ImgProcTest_bench : ImgProcTest.o ImgProcTest_bench.o
	g++ -o ImgProcTest_bench ImgProcTest.o ImgProcTest_bench.o



clean:
	rm -f ImgProcTest.o ImgProcTest_bench.o ImgProcTest_bench img_out.pgm
	rm -rf Catapult* catapult.log design_checker*
