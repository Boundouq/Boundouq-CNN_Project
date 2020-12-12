def normalize():
    image_source = open("data/test_batch.bin", "rb")
    image_out = open("data/test_batch.txt", "w")
    for i in range (30730000):    
        a = int.from_bytes(image_source.read(1), byteorder='big')
        assert a <= 255
        image_out.write( str(a) + '\n')
    image_out.close()
    image_source.close
 

normalize()
