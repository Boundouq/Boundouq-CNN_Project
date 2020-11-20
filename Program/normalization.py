#####################################################################################
###                                     NORMALISE                                 ###
#####################################################################################

from array import array
import png
from math import sqrt
import copy
import numpy as np

# The number of the picture that we will normalize
IMAGE_NUM =100

# Output files
image_name = 'Results/' + str(IMAGE_NUM) + 'Image_' + str(IMAGE_NUM) + '.png'
image_matrix = 'Results/' + str(IMAGE_NUM) + 'Matrix_' + str(IMAGE_NUM) + '.txt'

image_source = open("data/test_batch.bin", "rb")

# Read the picture number IMAGE_NUM
image_source.read(IMAGE_NUM * 3072 + 1)

# Normalised and non-normalised RGB list
red = list()
non_red = list()
green = list()
non_green = list()
blue = list()
non_blue = list()
rgb = list()
non_rgb = list()

#####################################################################################

def normalize(image, nor_list, non_nor_list):
    sum = 0
    average = 0
    deviation = 0
    size = 24 * 24

    # Cut out image
    for i in range(0,32):
        if i > 3 and i < 28:
            l=[]
            n_l=[]
            for j in range(0,32):
                if j > 3 and j < 28:
                    a = int.from_bytes(image.read(1), byteorder='big')
                    l.append(a)
                    n_l.append(a)
                else:
                    image.read(1)
            nor_list.append(l)
            non_nor_list.append(n_l)
        else:
            image.read(32)

    # Calculate average value
    for i in range(0, 24):
        for j in range(0, 24):
            sum += nor_list[i][j]
    average = sum / size

    # Calculate standard deviation
    for i in range(0, 24):
        for j in range(0, 24):
            deviation += (nor_list[i][j] - average) ** 2
    deviation = sqrt(deviation / size)

    # Normalization
    for i in range(0, 24):
        for j in range(0, 24):
            nor_list[i][j] = (nor_list[i][j] - average) / max(deviation , 1/sqrt(size))


####################################################################################            

# Create image
def RGB_image(lred, lnon_red, lgreen, lnon_green, lblue, lnon_blue, lrgb, lnon_rgb):
    for i in range(0, 24): 
        ln= []
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

####################################################################################

# Create normalized image matrix
def matrix(rgb_list):
    m = open(image_matrix, "w")

    for y in range(0, 3):
        for i in range(0, 24):
            for j in range(0, 24):
                m.write(str(rgb_list[y][i][j]) + ' ')
            m.write('\n')
        m.write('\n')
    m.close()

####################################################################################

# Create non-normalized image
def image(n_rgb):
    im = open(image_name, 'wb')
    w = png.Writer(24, 24, greyscale=False)
    w.write(im, n_rgb) ; im.close()

####################################################################################

normalize(image_source, red, non_red)
normalize(image_source, green, non_green)
normalize(image_source, blue, non_blue)

RGB_image(red, non_red, green, non_green, blue, non_blue, rgb, non_rgb)

matrix(rgb)

image(non_rgb)


