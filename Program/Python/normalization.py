#####################################################################################
###                                     NORMALISE                                 ###
#####################################################################################

import png
from math import sqrt
#import numpy as np
from PIL import Image

# The number of the picture that we will normalize
#IMAGE_NUM = 9

#image_source = open("Python/data/test_batch.bin", "rb")

#image_source.read(IMAGE_NUM * 3073 )
#classe = int.from_bytes(image_source.read(1), byteorder='big')
#print ("classe " +str(classe))

# Output files
#image_name = 'Image_' + str(IMAGE_NUM) + '_' + str(classe) + '.png'
#image_matrix = 'Normalization_Image_' + str(IMAGE_NUM) + '.h'


# Read the picture number IMAGE_NUM
#image_source.read(IMAGE_NUM * 3073 + 1)

# Normalised and non-normalised RGB list
#red = list()
#non_red = list()
#green = list()
#non_green = list()
#blue = list()
#non_blue = list()
#rgb = list()
#non_rgb = list()

#####################################################################################

# Normalization
def normalize(image):
    sum = 0
    average = 0
    deviation = 0
    size = 24 * 24 * 3
    nor_list = []
    non_nor_list = []
    red = list()
    non_red = list()
    green = list()
    non_green = list()
    blue = list()
    non_blue = list()
    # Cut out image
    zeros = [0 for i in range(26)]
    for l in range (3):
        c = []
        n_c = []
        c.append(zeros)
        for i in range(0, 32):
            if i > 3 and i < 28:
                l = []
                n_l = []
                l.append(0)
                for j in range(0, 32):
                    if j > 3 and j < 28:
                        a = int.from_bytes(image.read(1), byteorder='big')
                        assert a <= 255
                        l.append(a)
                        n_l.append(a)
                    else:
                        image.read(1)
                l.append(0)

                c.append(l)
                n_c.append(n_l)
            else:
                image.read(32)
        c.append(zeros)
        nor_list.append(c)
        non_nor_list.append(n_c)
    # Calculate average value
    for l in range (3):
        for i in range(1, 25):
            for j in range(1, 25):
                sum += nor_list[l][i][j]
    #print(sum)
    average = sum / size

    # Calculate standard
    for l in range(3):
        for i in range(1, 25):
            for j in range(1, 25):
                deviation += (nor_list[l][i][j] - average) ** 2
    #print(deviation)
    deviation = sqrt(deviation / size)
    #print(deviation)
    # Normalization
    for l in range(3):
        for i in range(1, 25):
            for j in range(1, 25):
                nor_list[l][i][j] = (nor_list[l][i][j] - average) / \
                    max(deviation, 1/sqrt(size))
    red = nor_list[0]
    non_red = non_nor_list[0]
    green = nor_list[1]
    non_green = non_nor_list[1]
    blue = nor_list[2]
    non_blue = non_nor_list[2]
    return (red, non_red, green, non_green, blue, non_blue)

####################################################################################

# Create image
def RGB_image(lred, lnon_red, lgreen, lnon_green, lblue, lnon_blue):
    lnon_rgb = []
    lrgb = []
    for i in range(0, 24):
        ln = []
        for j in range(0, 24):
            # Non-normalized image
            ln.append(lnon_red[i][j])
            ln.append(lnon_green[i][j])
            ln.append(lnon_blue[i][j])
        lnon_rgb.append(ln)

    # Normalized image
    lrgb.append(lred)
    lrgb.append(lgreen)
    lrgb.append(lblue)
    return (lrgb, lnon_rgb)

####################################################################################

# Create normalized image matrix
def matrix(image_matrix, rgb_list):
    m = open(image_matrix, "w")
    m.write('#ifndef _IMG0_H_ \n#define _IMG0_H_ \n#include "KERNEL.h" \nstatic d_type norm_image[WEIGHT_1_NUM][IMAGE_1_WIDTH][IMAGE_1_WIDTH] =')
    m.write('{')
    for y in range(0, 3):
        m.write('{')
        for i in range(0, 26):
            m.write('{')
            for j in range(0, 26):
                if(j!=25):
                    m.write(str(rgb_list[y][i][j]) + ',')
                else:
                    m.write(str(rgb_list[y][i][j]))
            m.write('}')
            if(i!=25):
                m.write(',')
        m.write('}')
        if(y!=2):
            m.write(',')
    m.write('}; \n#endif')
    m.close()

####################################################################################

# Create non-normalized image
def image(image_name, n_rgb):
    im = open(image_name, 'wb')
    w = png.Writer(24, 24, greyscale=False)
    w.write(im, n_rgb)
    im.close()

####################################################################################


#red, non_red, green, non_green, blue, non_blue  = normalize(image_source)
#rgb, non_rgb = RGB_image(red, non_red, green, non_green, blue, non_blue)


##matrix(image_matrix, rgb)

#image(image_name, non_rgb)

#image = Image.open(image_name)
#st = 'Image_' + str(IMAGE_NUM) + '_' + str(classe) + '.pgm'
#cla = 'truck.ppm'
#out = 'resized_image_' +  str(IMAGE_NUM) + '.h'

#new_image = image.resize((320, 320))
#new_image.save(str)

#print(image.size) # Output: (1920, 1280)
#print(new_image.size) # Output: (400, 400)

#img = open(st, "r")
#img.readline()
#img.readline()
#img.readline()
#img.readline()

#m = open(out, "w")
#m.write(str(classe)+',')

#m.write("static i_type resized_image [24*24] = {")

#for i in range (0,576):
#    s = img.readline()
#    s = s.split('\n')
#    if (i != 575):
#        s[0] += ','
#    m.write(s[0])
#m.write("};")
#m.close()

