#####################################################################################
###                                    CNN_Project                                ###
#####################################################################################

import normalization
import convolution
import maxpool

import png
from math import sqrt
import numpy as np

# The number of the picture that we will normalize
IMAGE_NUM = 0

# Convolution stage between 0 and 2
STAGE = 5

#The output image size
X = [24, 12, 6]
W = [3, 64, 32, 180]
B = [64, 32, 20, 10]

# Input files
image_source = open("data/test_batch.bin", "rb")
kernel = open('data/CNN_coeff_3x3.txt', "r")

# Output files
image_name = 'Results/Image_' + str(IMAGE_NUM) + '.png'
image_matrix = 'Results/Normalization_Image_' + str(IMAGE_NUM) + '.txt'
image_convolution_64 = 'Results/Convolution_Image_'+ str(IMAGE_NUM) + '_' + str(X[0]) + '.txt'
image_maxpool_64 = 'Results/Maxpool_Image_'+ str(IMAGE_NUM) + '_' + str(B[0]) + '.txt'
image_convolution_32 = 'Results/Convolution_Image_' + str(IMAGE_NUM) + '_' + str(X[1]) + '.txt'
image_maxpool_32 = 'Results/Maxpool_Image_' + str(IMAGE_NUM) + '_' + str(B[1]) + '.txt'
image_convolution_20 = 'Results/Convolution_Image_'+ str(IMAGE_NUM) + '_' + str(X[2]) + '.txt'
image_maxpool_20 = 'Results/Maxpool_Image_'+ str(IMAGE_NUM) + '_' + str(B[2]) + '.txt'


image_source.read(IMAGE_NUM * 3073 )
print ("classe " +str(int.from_bytes(image_source.read(1), byteorder='big')))
#matrix = open(image_matrix, 'r')

# Normalised and non-normalised RGB list
red = list()
non_red = list()
green = list()
non_green = list()
blue = list()
non_blue = list()
rgb = list()
non_rgb = list()

# Parameters
input_64 = list()
input_32 = list()
input_20 = list()
biases_64 = list()
weights_64 = list()
biases_32 = list()
weights_32 = list()
biases_20 = list()
weights_20 = list()
b = list()
w = list()

# Output convolution matrix
out_convolution_64 = list()
out_convolution_32 = list()
out_convolution_20 = list()


#####################################################################################
# Normalize
normalization.normalize(image_source, red, non_red)
normalization.normalize(image_source, green, non_green)
normalization.normalize(image_source, blue, non_blue)

# Create image
normalization.RGB_image(red, non_red, green, non_green, blue, non_blue, rgb, non_rgb)

# Create normalized image matrix
normalization.matrix(image_matrix,rgb)

# Create non-normalized image
normalization.image(image_name,non_rgb)

#####################################################################################

# Get kernel matrix (biases and weights), for convolution nember "stage"
convolution.get_kernel_matrix(kernel,0,B , W, biases_64, weights_64)

# Get image matrix
convolution.get_matrix(image_matrix, 0, X,input_64)

# Calculate convolution
convolution.convolution(input_64,0,weights_64,biases_64, B, X,out_convolution_64)

# Create output convolution matrix file
convolution.convo_matrix(image_convolution_64, out_convolution_64, B, X, 0)

# Get convulution matrix
tab_64 = maxpool.convert2array(image_convolution_64,B[0])

# Maxpool_64
tab_out_64 = maxpool.maxpool(tab_64,image_maxpool_64)

#####################################################################################

# Get kernel matrix (biases and weights), for convolution nember "stage"
convolution.get_kernel_matrix(kernel,1,B , W, biases_32, weights_32)

# Get image matrix
convolution.get_matrix(image_maxpool_64, 1, X,input_32)

# Calculate convolution
convolution.convolution(input_32,1,weights_32,biases_32, B, X, out_convolution_32)

# Create output convolution matrix file
convolution.convo_matrix(image_convolution_32, out_convolution_32, B, X, 1)

# Get convulution matrix
tab_32 = maxpool.convert2array(image_convolution_32,B[1])

# Maxpool_32
tab_out_32 = maxpool.maxpool(tab_32,image_maxpool_32)

#####################################################################################

# Get kernel matrix (biases and weights), for convolution nember "stage"
convolution.get_kernel_matrix(kernel, 2,B , W, biases_20, weights_20)

# Get image matrix
convolution.get_matrix(image_maxpool_32, 2, X,input_20)

# Calculate convolution
convolution.convolution(input_20,2,weights_20,biases_20, B, X ,out_convolution_20)

# Create output convolution matrix file
convolution.convo_matrix(image_convolution_20, out_convolution_20, B, X, 2)

# Get convulution matrix
tab_20 = maxpool.convert2array(image_convolution_20,B[2])

# Maxpool_20
tab_out_20 = maxpool.maxpool(tab_20,image_maxpool_20)

#####################################################################################

# Reshape
vecteur = maxpool.reshapee(tab_out_20)

# Get kernel matrix (biases and weights), for convolution nember "stage"
maxpool.get_coeff(kernel, 3, B, W, b, w)

# Fully connected
result = maxpool.fully_conn(w, vecteur,b)

print(result)

tab = []
for elm in result:
    tab.append(elm)
t = []
for i in range (9):
    a = float(max(tab))
    t.append(tab.index(a))
    tab[tab.index(a)] = -100
print (t)
