<!--Dedicated to my elder sister who inspire me to write along the way
This book is also dedicated to my Parents.
They explain me the purpose of life how to live.
They inspire me in each and every turn of my life.
Understanding the problem-solving circumstance are the experiences to step forward.
Awareness to the topic comes with knowledge of attention.
And Develop personal theory of practice and lab requirement thesis.-->

******************************************************************************
                                    Introduction
******************************************************************************

Digital image processing is the class of methods that deal with manipulating digital images through the use of computer algorithms. It is an essential pre-processing step in many applications, such as face recognition, object detection, and image compression.
Digital image processing can involve various tasks, such as:
-Image acquisition: This involves capturing an image using a digital camera or scanner, or importing an existing image into a computer.
 -Image enhancement: This involves improving the visual quality of an image, such as increasing -contrast, reducing noise, and removing artifacts.
 -Image restoration: This involves removing degradation from an image, such as blurring, noise, and distortion.
 -Image segmentation: This involves dividing an image into regions or segments, each of which corresponds to a specific object or feature in the image.
 -Image representation and description: This involves representing an image in a way that can be analyzed and manipulated by a computer, and describing the features of an image in a compact and meaningful way.
-Image analysis: This involves using algorithms and mathematical models to extract information from an image, such as recognizing objects, detecting patterns, and quantifying features.
 -Image synthesis and compression: This involves generating new images or compressing existing images to reduce storage and transmission requirements.
-Image classification is a subdomain of computer vision dealing with categorizing and labeling groups of pixels or vectors within an image using a collection of predefined tags or categories that an algorithm has been trained on

Digital image processing is widely used in various fields, such as:
 Medical imaging: This involves processing images of human organs and tissues for diagnosis, treatment, and research purposes. Examples include X-ray, MRI, CT scan, ultrasound, etc.
Remote sensing: This involves processing images of the Earth’s surface and atmosphere captured by satellites or aircrafts for monitoring environmental changes, natural disasters, land use, etc. Examples include Landsat, MODIS, Sentinel, etc.
 Computer vision: This involves processing images for understanding and interacting with the visual world. Examples include face recognition, object detection, scene understanding, etc.
 Multimedia: This involves processing images for creating and displaying digital content. Examples include image editing, animation, video games, etc.
In image processing, an image texture is a set of metrics calculated to quantify the perceived texture of an image. Image texture gives us information about the spatial arrangement of color or intensities in an image or selected region of an image. Image textures can be artificially created or found in natural scenes captured in an image.

Texture analysis is a technique used in computer vision to extract information from digital images. It is used to identify regions of an image that are homogeneous with respect to the texture. Texture analysis is used in many applications such as medical imaging, remote sensing, and industrial inspection.

Texture synthesis is the process of algorithmically constructing a large digital image from a small digital sample image by taking advantage of its structural content. It is an object of research in computer graphics and is used in many fields, amongst others digital image editing, 3D computer graphics and post-production of films.

There are many techniques used in computer vision such as image classification, object recognition, object tracking, event detection, video tracking, 3D pose estimation, learning, indexing, motion estimation, visual servoing, 3D scene modeling, and image restoration
**********************************************************************************************
                                   Digital Image
**********************************************************************************************
What is digital image processing?
Digital image processing is use of a digital computer to process digital images through an algorithm. Digital image processing as a broad spectrum of application, such as remote sensing via satellite and other space crafts. A single digital image can present a very large amount of information in a compact and easily interpreted form. Many of the techniques of digital image processing, or digital picture processing has developed in the 1960s at the Jet Propulsion Laboratory, MIT, Bell Labs, University of Maryland as application of satellite imagery.
Wire photo standard conversion, medical imaging, videophone, character recognition and photo enhancement, and the cost of processing was fairly high with the computing equipment of that era. In the 1970s, digital image processing proliferated, when cheaper computers and dedicated hardware became available. Images could then be processed in real time, for some dedicated problems as television standard conversion.
As general purpose computers became faster, they started to take over the role of dedicated hardware for all but the most specialized and computer intensive operations. With fast computers and signal processors available in the 2000s, digital image processing has become the most common form of image processing, and is generally used because it is the most versatile method.
Digital image processing allows the use of much more complex algorithms for image processing, and hence can offer more sophisticated performance at simple tasks, and the implementation of methods which would be impossible by analog means.
In accordance with the methodology of image analysis, digital image processing is the theoretical and practical approach for the Classification , Feature Extraction and Pattern Recognition of the image.
***********************************************************************************************
                                   Texture Analysis and Its application
***********************************************************************************************
Texture is a term that can have different meanings depending on the context. In general, texture refers to the quality of something that can be decided by touch; the degree to which something is rough or smooth, or soft or hard. Texture can also refer to the appearance or feel of a surface or a substance.

For example, in art and design, texture can be used to create visual effects or impressions, such as adding depth, contrast, or realism to an image. Texture can also be used to convey emotions or moods, such as warmth, coldness, or roughness.

In computer graphics, texture can refer to a digital image that is applied to a surface or a shape to give it more detail and realism. Texture can also refer to a technique of mapping an image onto a surface or a shape using coordinates and algorithms.

In literature, texture can refer to the style and structure of a written work, such as the choice of words, sentences, paragraphs, and figures of speech. Texture can also refer to the way that a written work appeals to the senses and emotions of the reader.

Texture can be broadly defined as the visual or tactile surface characteristics and appearance of something. Textures can consist of very small elements like sand, or big elements like tree canopy in a tree.

Texture can also be formed by a single surface via variations in shape, illumination, shadows, absorption, and reluctance. Distance and Scale play a big role in the formation of texture at the visual level and it is being concluded that “texture regions give different interpretations at different distances and different degrees of visual attention”. 

Texture region is the part of the image that has a specific feature like rough, smooth or bumpy. Texture region would be use to analyze, segment or  classify the image according to its texture.

The notion of texture depends on three ingredients.
 Some local ‘order’ is repeated over a region that is large in comparison to the order’s size. 
The order consists of the non-random arrangement of elementary parts.
The parts are roughly uniform entities having approximately the same dimensions everywhere within the textured region.
One way to define a texture region is to use a co-occurrence matrix, which counts how often pairs of pixels with certain values and spatial relationships occur in an image. Another way is to use edge detection, which finds the boundaries of regions with different textures based on the changes in pixel intensity. A third way is to use texture measurements, such as entropy, range, or standard deviation, to assign a value to each region and then group regions with similar values.
Texture analysis is a method of extracting features from images based on the spatial variation of pixel intensity. It can be used for various applications such as object recognition, surface defect detection, pattern recognition, medical image analysis, etc.

Some of the advantages of texture analysis are:

- It can capture the characteristics of complex and irregular objects that are difficult to describe by other methods.
- It can provide a rich representation of image content that can be used for classification, segmentation, retrieval, etc.
- It can be robust to challenges such as noise, rotation, scaling, illumination, etc.

Some of the disadvantages of texture analysis are:

- It can be computationally expensive and time-consuming depending on the complexity of the texture features and algorithms.
- It can be sensitive to the choice of parameters and thresholds that affect the performance and accuracy of the methods.
- It can be difficult to interpret and compare the results of different texture features and methods.

Application
Color Thresholder: 
The color Thresholder app segment color images by thresholding the color channels based on diferent color spaces. Using the app, create a binary segmentation mask for a color image.
Image Segmenter:
 This app create a segmentation mask using automatic algorithms such as flood fill, semi- automatic techniques such as drawing ROIs . Refins mask using morphology or an iterative approach such as active contours.
volume segmenter:
The app can be used to create and refine a binary or semantic segmentation mask for a 3-D grayscale or an RGB image using automated, semi-automated and manual techniques.
*****************************************************************************************************************
                                  Properties of Texture
*****************************************************************************************************************
Properties of texture
Properties of texture of image are the characteristics or features that describe how an image texture looks or feels. Image texture refers to the spatial arrangement of color or intensities in an image or selected region of an image². Image texture can be artificially created or found in natural scenes captured in an image.

Some examples of properties of texture of image are:

- Coarseness: This refers to the size or frequency of the texture elements or patterns in an image. Coarse textures have large or widely spaced elements, while fine textures have small or closely spaced elements⁴.
- Contrast: This refers to the difference or variation of the intensity values in an image. High contrast textures have large differences between light and dark areas, while low contrast textures have small differences⁴.
- Directionality: This refers to the orientation or alignment of the texture elements or patterns in an image. Directional textures have a dominant direction, such as horizontal, vertical, or diagonal, while non-directional textures have no preferred direction⁴.
- Regularity: This refers to the orderliness or predictability of the texture elements or patterns in an image. Regular textures have a uniform or repeated arrangement, while irregular textures have a random or chaotic arrangement.
- Roughness: This refers to the smoothness or jaggedness of the texture elements or patterns in an image. Rough textures have sharp edges or transitions, while smooth textures have soft edges or transitions.
Properties of texture of image can be used to represent, compare, and classify textures. Properties of texture of image can be extracted using various methods, such as edge detection, co-occurrence matrices, local binary patterns, etc. These methods use different approaches to extract texture properties from an image. For example, the GLCM method examines the spatial relationship between neighboring pixels by estimating pairwise statistics of pixel intensities. The LBP method, on the other hand, uses a binary code to represent the relationship between a pixel and its neighbors.

Edge Detection:
Edge detection is an image processing technique used to identify points in a digital image where the image brightness changes sharply or has discontinuities.These points are called edges or boundaries of the image. Edge detection is a fundamental tool in image processing, machine vision, and computer vision, particularly in the areas of feature detection and feature extraction.

Co-occurrence texture:
Co-occurrence analysis is a method of examining the spatial relationship of pixels in an image based on their intensity values. It involves creating a co-occurrence matrix (or matrices) that counts how often pairs of pixel values occur at a certain distance and orientation. The co-occurrence matrix can then be used to derive various statistical measures that characterize the texture of an image, such as contrast, correlation, energy, and homogeneity.

Local Binary Patter:
Local binary pattern (LBP) is a simple and efficient texture operator that assigns a binary code to each pixel based on the comparison of its intensity with its neighboring pixels. LBP can capture the local structure and contrast of textures and is invariant to monotonic gray-scale changes. LBP can also be extended to be rotation invariant and to use different neighborhood sizes.
LBP can be used for texture classification by computing histograms of LBP codes over image patches and comparing them with a distance measure or a classifier. LBP can also be used for texture segmentation by labeling pixels according to their LBP histograms

Texture is a property of areas; the texture of a point is undefined. So, the texture is a neighborhood of contextual property and its definition must involve gray values in a spatial.
The size of this neighborhood depends upon the texture type or the size of the primitives defining the texture.
In an Image Texture can be perceive at different scales or levels of resolution For example, consider the texture represented in a brick wall. At a coarse resolution, the texture is perceived as formed by the individual bricks in the wall. At a higher resolution, when only a few bricks are in the field of view, the perceived texture shows the details in the brick.
A region is perceived to have texture when the number of primitive objects in the region is large. If only a few primitive objects are present, then a group of countable objects is perceived instead of a textured image.

*******************************************************************************************
                                  Texture Extraction
*******************************************************************************************
In extracting texture is to Identify perceived qualities of texture present in an image. The intensity variations in an image which characterize texture are generally due to some underlying physical variation in the scene (such as pebbles on a beach or waves in water). Modeling this physical variation is very difficult, so texture is usually characterized by the two-dimensional variations in the intensities present in the image.
Texture extraction is the process of obtaining features or descriptors that represent the texture of an image or a region of an image. Texture extraction can be used for various purposes, such as texture classification, segmentation, recognition, synthesis, and analysis.
Texture extraction is the process of deriving meaningful features from an image that describe its texture properties.Texture  extraction methods can be categorized into different types based on the techniques or principles they use, such as:

- Statistical methods: These methods use statistical measures or distributions to describe the texture properties, such as coarseness, contrast, directionality, etc. Some examples of statistical methods are gray-level co-occurrence matrix (GLCM), local binary pattern (LBP), gray-level run-length matrix (GLRLM), etc.

- Structural methods: These methods use structural elements or patterns to describe the texture properties, such as regularity, periodicity, symmetry, etc. Some examples of structural methods are texture-based methods, morphological methods, syntactic methods, etc.

- Model-based methods: These methods use mathematical models or functions to describe the texture properties, such as randomness, complexity, fractality, etc. Some examples of model-based methods are Markov random field (MRF), fractal dimension (FD), autoregressive model (AR), etc.

- Transform-based methods: These methods use transforms or filters to decompose the image into different frequency components or sub-bands and extract features from them. Some examples of transform-based methods are Fourier transform (FT), wavelet transform (WT), Gabor transform (GT), ridgelet transform (RT), etc.

Texture extraction methods can have different advantages and disadvantages depending on the application and the characteristics of the image. Some factors that can affect the performance of texture extraction methods are:

- The resolution and quality of the image
- The size and shape of the texture region
- The noise and illumination conditions
- The variability and complexity of the texture
- The computational complexity and efficiency of the method
- The robustness and discriminability of the features

 In order to characterize any texture, there are different parameters:
1. Local Binary Pattern, 
2. Contrast, 
3. Rotational in-variance,
4. Uniform Local Binary Pattern, 
5. Texture vector

*******************************************************************************
         Texture extraction: Local Binary Pattern
*******************************************************************************
Local binary pattern (LBP) is a type of texture extraction method that uses binary codes to describe the local neighborhood of each pixel in an image. LBP is a simple and efficient method that can capture the texture properties, such as coarseness, contrast, and directionality.

LBP works as follows:

- For each pixel in the image, compare its intensity value with its 8 neighbors (on its left-top, left-middle, left-bottom, right-top, etc.).
- If the neighbor’s value is greater than or equal to the center pixel’s value, assign 1 to that neighbor. Otherwise, assign 0.
- This gives an 8-digit binary number for each pixel (which can be converted to decimal for convenience).
- The binary number represents the local binary pattern of that pixel, which reflects the texture information around it.

LBP can be used to extract features from an image by computing a histogram of the LBP codes for each region or cell in the image. The histogram can be normalized and concatenated to form a feature vector for the whole image.

LBP has some advantages and disadvantages, such as:

- It is simple and fast to compute
- It is invariant to monotonic gray-scale changes
- It can capture micro-structures and edges in an image
- It is sensitive to noise and rotation
- It has a high dimensional when using a large number of neighbors

LBP has been improved and extended by various methods, such as uniform LBP, rotation-invariant LBP, multi-scale LBP, etc.
Texture T in a local neighborhood of a gray scale image is defined as the joint distribution of the gray levels of P+1 (P>0) image pixels: T-3303 P-1) where ge corresponds to the gray value of the center pixel of a local neighborhood. gp(p 0,…, P-1) correspond to the gray values of P equally spaced pixels on a circle of radius R (R>0) that form a circularly symmetric set of neighbors. This set of P+1 pixels is la denoted by GP. P=12 R-25 P:16 R=4.0 If the value of the center pixel is subtracted from the values of the neighbors, the local texture can be represented without losing information-as a joint distribution of the
value of the center pixel and the differences:
Although invariant against gray scale shifts, the differences are affected by scaling. To achieve invariance with respect to any monotonic transformation of the gray scale, only the signs of the differences are considered:
Example The basic idea of this approach is demonstrated in fig.We consider a 3X3 neighborhood around each pixel. All neighbor that have values higher than the value of the central pixel are given value 0.The eight binary number associated with the eight neighbor are then read sequentially in the clockwise direction to form a binary number. The binary number (or its equivalent in the decimal system) may be assigned to the central pixel and it may be used to characterize the local texture.
relative position with respect to the central pixel These weight are 2 22,2′ 2″ 2′ 2′ and 2 With the first assigned to the neighbor which contributes the most significant
*********************************************************************************
Texture extraction: Contrast
*********************************************************************************
Contrast in image processing is a measure of the difference in brightness or color between different parts of an image. Contrast can affect the visibility and clarity of the image features, such as edges, textures, and details³⁴.

Contrast can be adjusted by changing the intensity values of the pixels in an image. There are different methods to do this, such as:

- Contrast stretching: This method increases the dynamic range of the image by mapping the minimum and maximum pixel values to a new range, such as 0 and 255. This can enhance the contrast of the image by making the dark areas darker and the bright areas brighter.
- Histogram equalization: This method redistributes the pixel values of the image so that they have a uniform frequency distribution. This can enhance the contrast of the image by spreading out the most frequent intensity values and increasing the contrast in low-contrast areas.
- Adaptive histogram equalization: This method applies histogram equalization to local regions of the image instead of the whole image. This can enhance the contrast of the image by adapting to local variations in brightness and contrast.
- Gamma correction: This method adjusts the brightness and contrast of the image by applying a non-linear transformation to the pixel values. This can enhance the contrast of the image by making it lighter or darker depending on the value of gamma.

Contrast enhancement can improve the quality and appearance of an image, as well as facilitate further processing and analysis. However, contrast enhancement can also introduce some artifacts or distortions, such as noise, saturation, or loss of detail.

Contrast of those pixels which have value 1 and those which have value 0 digit, the second assigned to the neighbor which contributes the second most significant digit, and To address the contrast of the texture, local binary pattern(LBP) is combined with a simple contrast measure contrast(C),which is difference between the average gray-level so on. 
Example:

*******************************************************************************************
Texture extraction: Rotation In-variance
*******************************************************************************************
Rotation invariance texture is a term that refers to the property of a texture feature or descriptor that does not change when the texture image is rotated by some angle. Rotation invariance texture can be useful for texture analysis and classification, because it can make the feature or descriptor more robust and consistent across different orientations of the texture image²³.

There are different methods to achieve rotation invariance texture, such as:

- Using features or descriptors that are inherently rotation invariant or equivariant, such as local binary patterns (LBP), steerable filters, Fourier transform magnitude, etc²⁴⁵.
- Using features or descriptors that are computed from rotation invariant or equivariant properties of the texture image, such as coarseness, contrast, directionality, etc²⁶.
- Using features or descriptors that are transformed or normalized to be rotation invariant or equivariant, such as histogram equalization, spiral resampling, rotation matrix, etc²⁴ .
- Using features or descriptors that are learned to be rotation invariant or equivariant, such as convolutional neural networks (CNN), rotation invariant filters, etc¹ .

Rotation invariance texture can have some advantages and disadvantages, such as:

- It can improve the accuracy and efficiency of texture classification and recognition
- It can reduce the dimensionality and complexity of the feature or descriptor space
- It can capture the intrinsic properties of the texture image
- It can introduce some artifacts or distortions due to interpolation or approximation
- It can lose some information or discriminatory due to rotation averaging or smoothing
Due to the circular sampling of neighborhoods, it is fairly straightforward to make LBP codes invariant with respect to rotation of the image domain. “Rotation in-variance” here does not however account for textural differences caused by changes in the relative positions of a light source and the target object.


It also does not consider artifacts that are caused by digitizing effects. Each pixel is considered a rotation center, which seems to be the convention in deriving rotation invariant operators. With the assumptions stated above, the rotation invariant LBP can be derived as follows. When an image is rotated, the gray values gp in a circular neighbor set move along the perimeter of a circle centered at gc.
Since the neighborhood is always indexed counter-clockwise, starting in the direction of the positive x axis,the rotation of the image naturally results in a different LBP: P,R value. This does not, however, apply to patterns comprising of only zeros or ones which remain constant at all rotation angles. To remove the effect of rotation, each LBP code must be rotated back to a reference position, effectively making all rotated versions of a binary code the same. This transformation can be defined as follows: LBP: PR = min(ROR(LBPPR)| = 0, 1, P-1)
Consider the pixel values around the central pixel in the matrix If we read these values sequentially in the clockwise direction,depending which pixel is the starting pixel, we may form the binary number and their decimal equivalent. In the above example, we can see that the first binary number is 0011111,now the circular rotation performed on it 8 times and we will get 8 different binary and it’s equivalent decimal number: circular right operation can be performed as on the binary number:
When 00111111(63) is circularly rotated it will become 011111110 which is equivalent to 126 Similarly this operation performed on the bit,eight times .In the 3X3 matrix actually these bits are rotated in 45° step. In the 8-different constructed number, we shall choose the smallest number, which is rotational invariant representation. In the given example this number is 63.
*********************************************************************
Texture extraction: Uniform local binary pattern
*********************************************************************
Uniform local binary pattern (ULBP) is a type of texture feature or descriptor that is based on the local binary pattern (LBP) method. ULBP is a simple and efficient method that can capture the texture properties, such as coarseness, contrast, and directionality.
The advantage of ULBP is that they reduce the number of possible patterns from 256 to 59 (58 uniform patterns plus one non-uniform pattern), which simplifies the computation and representation of texture features. ULBP can also be made rotation invariant by assigning the same label to different rotations of the same pattern

ULBP works as follows:

- For each pixel in the image, compare its intensity value with its 8 neighbors (on its left-top, left-middle, left-bottom, right-top, etc.).
- If the neighbor’s value is greater than or equal to the center pixel’s value, assign 1 to that neighbor. Otherwise, assign 0.
- This gives an 8-digit binary number for each pixel (which can be converted to decimal for convenience).
- The binary number represents the local binary pattern of that pixel, which reflects the texture information around it.
- A local binary pattern is called uniform if the binary pattern contains at most two circular 0-1 and 1-0 transitions. For example, patterns 00111000, 11111111, 00000000, and 11011111 are uniform, and patterns 01010000, 01001110, or 10101100 are not uniform¹ .
- Compute the histogram, over the image or a region of the image, of the frequency of each uniform pattern occurring. There are 58 possible uniform patterns for an 8-neighborhood. All non-uniform patterns are assigned to a single bin. This histogram can be seen as a 59-dimensional feature vector.
- Optionally normalize the histogram.

ULBP can be used to extract features from an image for texture classification and recognition. ULBP has some advantages and disadvantages, such as:

- It is simple and fast to compute
- It is invariant to monotonic gray-scale changes
- It can reduce the dimensionality and complexity of the feature vector compared to LBP
- It can improve the discriminability and robustness of the feature vector compared to LBP
- It can lose some information or details due to ignoring non-uniform patterns²³

ULBP has been improved and extended by various methods, such as rotation-invariant ULBP, multi-scale ULBP, completed ULBP, etc²³.

UNIFORM LOCAL BINARY PATTERN 
The concept of “uniform” patterns was formed when it was observed that certain patterns seem to capture fundamental properties of texture, occurring in the vast majority of patterns, sometimes over 90%. This proposition was further confirmed with a large amount of data. These patterns called “uniform” because they have one thing in common: at most two one-to-zero or zero-to-one transitions in the circular binary code. The LBP codes shown in Figure are all uniform. To formally define the “uniformity” of a neighborhood G a uniformity measure U is needed:
The total number of patterns with U (GP) 2 is P (P-1)+2. When “uniform” codes are ted to their minimum values, the total number of patterns becomes P+1. The rotation vant uniform (riu2) pattern code for any “uniform” pattern is calculated by simply ing ones in the binary number. All other patterns are labeled “miscellaneous” and lapsed into one value:
histogram
ULBP can be used for texture classification by computing the histogram of ULBP codes for each image and using it as a feature vector. The histogram can capture the distribution of texture patterns in the image and can be used to compare and classify different textures. The feature vector can then be fed to a machine learning algorithm such as support vector machine (SVM), k-nearest neighbor (k-NN), or neural network to perform the classification task.
ome variations and extensions of ULBP have been proposed to improve the performance of texture classification. For example, some methods combine ULBP with other texture features such as gray-level co-occurrence matrix (GLCM), wavelet transform, or local ternary patterns (LTP). Some methods also use different neighborhood sizes, radii, or orientations to compute ULBP. Some methods also apply dimensionality reduction techniques such as principal component analysis (PCA) or linear discriminant analysis (LDA) to reduce the feature vector size and complexity
**********************************************************************************************
Texture Extraction: Texture Vectors
**********************************************************************************************
Texture vector in texture extraction is a term that refers to a feature vector that represents the texture properties of an image or a region of an image. Texture vector in texture extraction can be used for texture analysis and classification, because it can capture the texture information, such as coarseness, contrast, directionality, etc²⁴.

There are different methods to obtain texture vector in texture extraction, such as:

- Local binary pattern (LBP): This method compares the intensity value of each pixel with its neighbors and assigns a binary code to each pixel. The histogram of the binary codes can be used as a texture vector¹⁴.
- Statistical methods: These methods use statistical measures or distributions to describe the texture properties, such as mean, variance, entropy, etc. The values of these measures can be used as a texture vector²⁴.
- Transform-based methods: These methods use transforms or filters to decompose the image into different frequency components or sub-bands and extract features from them. The coefficients or magnitudes of these components can be used as a texture vector²⁴.
- Model-based methods: These methods use mathematical models or functions to describe the texture properties, such as Markov random field, fractal dimension, autoregressive model, etc. The parameters or values of these models can be used as a texture vector²⁴.

Texture vector in texture extraction can have different advantages and disadvantages depending on the method and the application. Some factors that can affect the performance of texture vector in texture extraction are:

- The resolution and quality of the image
- The size and shape of the texture region
- The noise and illumination conditions
- The variability and complexity of the texture
- The computational complexity and efficiency of the method
- The robustness and discriminability of the feature vector

 Texture vectors are being calculated using the uniform local binary pattern (ULBP), we define texture vector for each pixel in its local neighborhood as T = [44] Where t, is the probability of “uniform texture i” in its symmetric n x n neighborhood (t, is the total number of non-uniform patterns).
Distance between two texture vectors : The Bhattacharya measure can be used to compare the similarity between two histogram Let [ri. 2. Fn] and [S1, S2, Sn] denote the normalized frequencies of bins 1 to n in histograms R and S, respectively. The Bhattacharya similarity metric, BCH, between and S histograms is defined as follows: BCH is between 0 and 1. BCH close to 1 show that the two histograms are similar.


For the case of two identical histograms BCH equals to 1.As mentioned, if two histogram are very similar then BCH is very close to 1. Therefore using Bhattacharya distance difference can be redefined as
**************************************************************************************
Cluster Analysis: k-means
**************************************************************************************
 Cluster analysis by k means is a method used for clustering analysis in data mining and statistics. It aims to partition a set of observations into a number of clusters (k) based on similarities between data points. The algorithm finds k centers, called cluster centroids, and assigns each data point to the cluster with the nearest centroid. The objective is to group similar data points together and discover underlying patterns. The algorithm minimizes within-cluster variances, but not regular Euclidean distances.

Cluster analysis by k means works as follows:

- Choose the number of clusters (k) and randomly select k data points as initial centroids.
- Repeat until convergence or until a maximum number of iterations is reached:
- For each data point, calculate the distance to each centroid and assign it to the cluster with the nearest centroid.
- For each cluster, recalculate the centroid as the mean of all the data points in that cluster.
- Evaluate the quality of the clustering by using some criteria, such as sum of squared errors (SSE), silhouette coefficient, etc²³.

Cluster analysis by k means can be used for various purposes, such as:

- Exploratory data analysis: This involves finding natural groups or structures in the data that can reveal some insights or patterns.
- Dimensionality reduction: This involves reducing the number of variables or features by using the cluster centroids or labels as new variables or features.
- Outlier detection: This involves identifying data points that are far away from their assigned cluster centroids or have low cluster membership values.
- Preprocessing: This involves preparing the data for further analysis or modeling by using clustering as a segmentation or stratification technique.

Cluster analysis by k means has some advantages and disadvantages, such as:

- It is simple and easy to implement and understand
- It is fast and scalable for large datasets
- It can produce tight and spherical clusters
- It is sensitive to outliers and noise
- It requires the user to specify the number of clusters (k)
- It can get stuck in local optima and depend on the initial centroids

Cluster analysis by k means has been improved and extended by various methods, such as k-medoids, k-modes, fuzzy c-means, etc.
Cluster analysis is one of the basic tools for exploring the underlying structure of a given data set and is being applied in a wide variety of engineering and scientific disciplines such as medicine, psychology, biology, sociology, pattern recognition, and image processing. 
The primary objective of cluster analysis is to partition a given data set of multidimensional vectors (patterns) into so-called homogeneous clusters such that patterns within a a cluster are more similar to each other than patterns belonging to different clusters. 
 K-means Clustering One of the earliest clustering techniques in the literature is the K-means clustering method. In this technique, clustering is based on the identification of K elements in the data set that can be used to create an initial representation of clusters. These K elements form the chatter seeds. The remaining elements in the data set are then assigned to one of these clusters. At each iteration cluster centers are recomputed. The algorithm terminates when re-computing cluster-centroids do not alter the cluster centroids with whom cluster membership v was calculated.
 K-means is one of the simplest unsupervised learning algorithms that solve the well known clustering problem. The procedure follows a simple and easy way to classify a given data set through a certain number of clusters (assume k clusters) fixed a priority.
 The idea is to define k centroids, one for each cluster. These centroids should be placed in cunning way because of different location causes different result. So, the better choice is place them as much as possible far away from each other.
 The next step is to take each point belonging to a given data set and associate it to the nearest centroid. When no point is pending the first step is completed and an early group age is done. At this point we need to calculate k new centroids. After we have these k new centroids, a new binding has to be done between the same data set points and the nearest new centroid. 
A loop has been generated. As a result of this loop we may notice that the k centroids change their location step by step until no more changes are done. In other words centroids do not move any Basic Algorithm for K-means clustering
 1) Select K points as initial cluster centroids at random 
2) Repeat 1) Form K Cluster by assigning all pixel one by one to nearest cluster using the Bhattacharya distance 
4) Re-estimate the centroids of the clusters assuming that the data memberships obtained in 
3)are correct, producing new model; 
5) Until Centroids do not change.
************************************************************************************************
Texture Analysis methodology
************************************************************************************************
Step 2: For each pixel of Image, Calculate ULBP and store it an array Calculate neighbour value in clockwise direction, in the 3×3 matrix we could be ab to read these values in 45°. The central element is go and neighbour element is gl, g2, g 4. g5, 86, 87, g8 in the given fig(a).


step 3: With the help of calculated ULBP we can calculate the texture vector it can be calculated in 5×5 window The texture vector can be calculated with the help of formula is where T- To store the values of Texture vector,we initialize an array of 10 elements 
Step 4: Start K-means Algorithm We can randomly select the initial seed points (k-2 or k-3), now we will assign every pixel a label after finding the nearest cluster. After each iteration, cluster centroids will be recalculated based on membership and assignment of every pixel to newly formed cluster will start over again until the cluster calculated after iteration do not change from the clusters with which we started the iteration. C[2] it makes two cluster. C3)-it makes three cluster. Now we will make structure to initialize the cluster The summation of square root of the calculated 10 values of histogram and cluster will be multiplied Diff texture =1-(√ √ -0 Here is the histogram shows how many members each cluster contains and ij is limit for the texture image 
Step 5: Using The Texture Vector Partition the Image in Different clusters After applying K-means, in output image we can see that the image is partitioned into the number of clusters and each cluster now covers a texture region.

 Results 1 The following input/output images shows result Result In A) we can see that it is 2 class texture image. we apply the UBLP and k-means algorithm. According to the methodology described in section 4, the Output Image is produced (fig B). It clearly shows that image was divided into two segments, but there is small percentage of pixels mislabeled.


Result 2 The input image has three distinct texture regions. We applied k-means on texture vector and the output clearly snows that image is divided into three regions. Also seen some percentage of pixels mislabeled into other regions. Here we can see that the output image is segmented into three parts
*****************************************************************************************
Tool(framework)
*****************************************************************************************
VC++.NET is a term that refers to the C++ programming language and its support for the .NET Framework in Visual Studio. The .NET Framework is a platform for developing applications that run on Windows, Linux, and macOS. It provides a common set of libraries and tools for various languages such as C#, Visual Basic, F#, and C++.

C++ is a general-purpose programming language that supports multiple paradigms such as object-oriented, generic, and functional programming. It also allows low-level access to hardware and memory management. C++ can be used to create native applications that run directly on the operating system, or managed applications that run on the .NET Framework.

To create managed applications in C++, Visual Studio provides two options: C++/CLI and C++/CX. C++/CLI is an extension of C++ that allows interoperability with .NET types and features. It uses a syntax similar to C#, such as ^ for references and gcnew for allocation. C++/CLI can be used to create Windows Forms, WPF, ASP.NET, and console applications that target the .NET Framework or .NET Core.

C++/CX is another extension of C++ that allows interoperability with Windows Runtime (WinRT) types and features. It uses a syntax similar to C++/CLI, such as ^ for references and ref new for allocation. C++/CX can be used to create Windows Store apps or Universal Windows Platform (UWP) apps that target Windows 8 or later.

Both C++/CLI and C++/CX are compatible with standard C++, which means you can use existing C++ libraries and code in your managed applications. However, they are not compatible with each other, which means you cannot mix C++/CLI and C++/CX code in the same project.

I will create a simple console application that prints a message to the standard output using the <malloc> function from the .NET Framework.

- Open Visual Studio and create a new project by selecting File > New > Project.
- In the Create a new project dialog, select C++/CLI from the Language drop-down list, and Console from the Type drop-down list. Then, select CLR Empty Project (.NET Framework) from the list of templates and click Next.
- In the Configure your new project dialog, enter a name for your project, such as HellotextureCLI, and choose a location to save it. Then, click Create.
- In the Solution Explorer window, right-click on the Source Files folder and select Add > New Item.
- In the Add New Item dialog, select C++ File (.cpp) from the list of templates and enter a name for your file, such as HellotextureCLI.cpp. Then, click Add.

- To build and run your project, press F5 or select Debug > Start Debugging from the menu. You should see a console window that displays the message “Hello from C++/CLI!” and waits for you to press any key to exit.

This is a simple example of using C++/CLI in Visual Studio. You can find more examples and tutorials on the official website or references .

The current web page context does not contain any information about vc++.net.
Some of the advantages of vc++.net are:

- It allows you to use the features and libraries of the .NET Framework, such as Windows Forms, WPF, ASP.NET, ADO.NET, etc. in your C++ applications.
- It enables you to interoperate with other .NET languages, such as C#, Visual Basic, F#, etc. and use their types and assemblies in your C++ code.
- It simplifies the memory management and garbage collection of your C++ objects by using managed pointers and references.
- It supports multiple paradigms of programming, such as object-oriented, generic, functional, and concurrent programming.

Some of the disadvantages of vc++.net are:

- It introduces some syntax changes and extensions to the standard C++, which may not be compatible with other compilers or platforms.
- It may incur some performance overhead due to the use of the .NET runtime and the interoperability between native and managed code.
- It may not support some features or libraries of the standard C++, such as templates, multiple inheritance, STL, etc. or require some modifications to use them.
- It may not be suitable for some applications that require low-level access to hardware or memory or need to run on non-Windows platforms.
*****************************************************************************************************
Some Special Terms(Code)
*****************************************************************************************************
`iostream` is a header file in the C++ standard library that contains definitions for input and output operations. It is used to handle input/output operations in C++ programming language. It is used to read input from the user and write output to the console. The header file contains definitions of objects like cin, cout, cerr etc. which are used to read input and write output respectively.

`malloc()` is a function in the C programming language that allows dynamic memory allocation. It is part of the standard library of functions included with most C compilers. The `malloc()` function allocates a block of memory of a specified size and returns a pointer to the first byte of the block. The block of memory is not initialized and may contain garbage values from previous usage. You can use the `free()` function to release the memory allocated by `malloc()`.

The `free()` function is used to deallocate memory that was previously allocated by `malloc()`, `calloc()`, or `realloc()` functions in C programming language. It is used to return the memory back to the operating system. The syntax for the free() function is as follows:

free(void *ptr);

Here, `ptr` is a pointer to the memory block that needs to be deallocated.

It is important to note that the pointer passed to the `free()` function must be a pointer returned by a previous call to `malloc()`, `calloc()`, or `realloc()` functions. If you pass any other pointer to the free() function, it will result in undefined behavior.

`math.h` is a header file in the C standard library that contains various mathematical functions. It is used to declare the most common mathematical functions such as trigonometric functions, exponential functions, logarithmic functions, and others. The header file is used in C programs to access the mathematical functions defined in the library.

Structure struct is a user-defined data type that groups related variables of different data types together. A structure can be considered as a template for a group of variables of different data types. The variables in a structure are called members. A structure can be defined using the keyword `struct` followed by the structure tag name. The general syntax for defining a structure is:

struct structure_name {
member_type1 member_name1;
member_type2 member_name2;
.
.
.
member_typeN member_nameN;
} [one or more structure variables];
My code in the Example
struct cluster
{
    /* data */
    float i[10];
    float cumi[10];
    int memcount;
};
a pointer is a variable that stores the memory address of another variable. A pointer is declared like any other variable, by specifying its data type followed by an asterisk and the variable name. The asterisk is used to indicate that a variable is a pointer. For example, the following code declares a pointer to an integer variable:


int *ptr;

The pointer variable can then be assigned the address of another integer variable using the address-of operator (&). For example:

int x = 5;
int *ptr = &x;


Here, the pointer variable ptr is assigned the address of the integer variable x. The value of ptr is now the memory address of x.

Pointers are often used  to pass variables by reference to functions or to dynamically allocate memory. They can also be used to create complex data structures such as linked lists and trees.

File :
In C programming, a file is a collection of related information that is stored on a secondary storage device such as a hard disk. It is used to store data permanently in a non-volatile memory (secondary memory). In C programming, we can perform various operations on files such as opening a file, reading from a file, writing to a file, appending to a file, closing a file etc.

Here is an example of how to open and read from a file in C programming:
#include <stdio.h>
#include <conio.h>

int main()
{
FILE *fp;
char ch;

fp = fopen("file.txt","r");
 // Opening the file

if(fp == NULL) 
// Checking if the file exists or not
{
printf("File does not exist.");
exit(1);
}

while((ch = fgetc(fp)) != EOF) // Reading the file character by character
printf("%c",ch);

fclose(fp); // Closing the file

return 0;
}
************************************************************************************************
code sample:ULBP
************************************************************************************************
<code>

// Texture segmentation using Uniform Local Binnary Pattern
#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<malloc.h>
#include<math.h>

// Declaration of structure cluster
struct cluster
{
    /* data */
    float i[10];
    float cumi[10];
    int memcount;
};

//variable declaration

unsigned char **allocateMem(int,int);
void applyKmeans(unsigned char **,int,int, unsigned char **);
void calculateTexturevector(unsigned char **, int,int,float *);
void initializecluster(unsigned char **, struct cluster* c);
void calculateTexture(unsigned char **,int,int);
void uniformPattern(unsigned char **, unsigned char **,int,int,int,int);
void localbinary(unsigned char **, unsigned char**,int,int,int,int);
void contrast(unsigned char **, unsigned char **,int,int,int,int);
void invariant(unsigned char **, unsigned char **,int,int);

int valassignment(int);
float abslocal(float);
float roundof(float);

// begining of main
void main()
{
    int i, row, col,k,l;
    FILE *in,*out;
    unsigned char **p,**q,**lblImage;

   // file open operation
    in = fopen("C:\texture_segmentation/raw.png","rb");
            if(in=NULL)
            {
              // printf("there is no such file exists:\n");
            }
   
           // printf("take value for p");
           //scanf("%d%d", &raw, &col);
 
       //function call for memory alloaction
                p= allocateMem(row,col);
                q= allocateMem(row,col);
                lblImage= allocateMem(row,col);

             for(i=0;i<row;i++)
            {
             fread(p[i],sizeof(unsigned char), col,in);
             }
                uniformPattern(p,q,row,col,k,l);
                applyKmeans(q,row, col,k,lblImage);
                calculateTexture(q,row,col);
                invariant(p,q,col,row);
                contrast(p,q,row,col,k,l);
                localbinary(p,q,,row,col,k,l);

                fclose();
            //file open operation
            out=fopen("C:\texture_segmentation/cluster2.raw","wb");

            //filewrite operation

    for(i=0;i<row;i++)
    {
        fwrite(lblImage[i], sizeof[char],col,out);
    }
   fclose(out);

//memorydeletion

for(i=0;i<row;i++)
{
    free(p[i]);
    free(q[i]);
    free(lblImage[i]);
}
free(p);
free(q);
free(lblImage);
}

// end of main function

//rotine for memory allocation
unsigned char **  allocateMem(int r,int c);
unsigned char **m;
int i,j;
m=(unsigned char **) malloc(c * sizeof(unsigned char *));

if(m=null)
{
    printf("1.Error");
}
for(i=0;i<r;i++)
{
    m[i]=(unsignes char *) malloc(c * sizeof(unsignes char));
    if(m[i]==null)
    printf("2. Error");
    }
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
       {
            m[i][j]=0;
        }
     }
return m;
}

// routineffor k mean cluster
void applyKmeans(unsigned char ** q,int row,int col, unsigned char ** lblImage)
{
    unsigned int consstatus;
    int clstLbl;
    int i,j,s,m;
    int cnt;
    float minDist, dist, delta, sigma, temp, error;
    float r[10]={0,0,0,,0,0,0};
    struct cluster clst[2];
    cnt=0;
    initializecluster(q, &clst[0]);
    conStatus=0;

    while(! conStatus)
    {
        for=(i=2;i<row-2;i++)
        {
            for(j=2;j<col-2;j++)
            {
                for(s=0;s<10;s++)
                r[s]=0.0;
                //printf("\ndata points");
                calculateTexturevector(q,i,j,&r[0]);
                minDist=999.0;
                for (size_t m = 0; m < 2; m++)
                {                
                    /* code */
                    delta = 0.0; dist=0.0;
                    for (cnt = 0; cnt < 10; cnt++)
                    {
                        /* code */
                        {sigma= r[cnt]* clst[m].i[cnt];
                        delta +=pow(sigma, 0.5);
                        }
                        dist=  pow(delta, 0.5);
                        //printf("\n dist=%f", dist);

                        if(dist<minDist)
                        {
                            clstLbl=m;
                            minDist=dist;
                        }
                    }
                    //printf("%f and label %d, minDist, clstLbl");
                    for(cnt=0; cnt<10; cnt++)
                    {
                        clst[clstLbl.cumi[cnt]+= r[cnt];
                    }
                    clst[clstLbl].memcount +=1;
                    lblImage[i][j]=(unsigned char) pow(2, clstLbl+6);
                }//inner for
                
            }//outer for
            conStatus=1; temp=0.0;
            for(m=0;m<2;m++)
            {
                printf("\n cluster %d has %d  points",m, clst[m].memcount);
                for(cnt=0;cnt<10;cnt++)
                {
                    temp= clst[m].cumi[cnt];
                    ///new mean center
                    clst[m].cumi[cnt]= temp/clst[m].memcount;
                    error = clst[m].cumi[cnt]-clst[m].i[cnt];

                    if(abslocal(error)<0.0001)
                    conStatus =1;;
                    else
                    conStatus =0;
             }
            }
            // refresh cluster center
           for(m=0;m<2;m++)
            {
                for (cnt=0; cnt<10; cnt++)
                {
                    /* code */
                    clst[m].i[cnt]= clst[m].cumi[cnt];
                    clst[m].cumi[cnt]=0.0;
                }
                clst[m].memocount=0;
                }
                
            }//end of while
        }//end of function
 //routine for initialize cluster
        void initializecluster(unsigned char **q, struct cluster * c)
        {
            int m,s,i,,j;
            float r[10]={0,0,0,0,0,0,0,0,0,0};
            //int xcoord[10]={};
            //int ycoord[10]={};
            int xcoord[2]={,};
            int xcoord[2]={,};
            for(m=0;m<2;m++)
            {
                i=xcoord[m];
                j=ycoord[m];
                calculateTexturevector(q,i,j,&r[0]);
                for(s=0;s<10;s++)
                {
                    c[m].i[s]=r[s];
                    //printf("\t%0.3f", c[m].i[s]);
                    r[s]=0.0;
                    c[m].cumi[s]=0.0;

                }//inner for
                c[m].memcount=0;
                }//outer for
        }//end of function
//routine for calculate textutervector
void calcullateTexturevector(unsigned char **q, int i, int j, float * r)
         {
              int k,l;
              for(k=-2;k<3; k++)
                   {   
                      for(l=-2;;l<3;l++)
                       {
                           r[q[i+k][j+l] += #/#;
                           //printf("%.3f", r[q[i+k][j+l]]);
                        }
             }//end of function
// routine for calculation of histogram-value
  void calculateTexture(unsiged char **q, int row,int col)
      {
                   int i,j,k,l;
                   float probability;
                   histo[10]={0,0,0,0,0,0,0,0,0,0};
                   
                 for(i=1; i<row-1;i++)
                     for(j=1; j<col-1; j++)
                         for(k=-1;k<2;k++)
                            {
                               for(l=-1;l<2;l++)
                                 {                                                                                                                                                                                                                                                       printf("\nq value %d ",q[i+j][j+i]);
                                                          histo[q[i+j][j+i]]+=1.0;

                                                                    }
                                                              }
                                                              printf("\n Texture vector for (%d,%d)",i,j);
                                                              for (
                                                                int s = 0; s < 10; s++)
                                                              {
                                                                /* code */
                                                                probability = histo[s]/9.0;
                                                                printf("\t %.3f",probability);
                                                                histo[s]=0.0;

                                                              }
                                                              
                                                          }//inner for
                                                      }//outer for
                                                  }//end of function
                        //routine for lbp

                        void uniformPattern(unsigned char **p, unsigned char **q, int row, int col,int k, int l)
                        {   
                            {
                                int i,cv,cw, lbp;
                                int j, lastEle, count, frstVal;
                                float delta1, delta2, tempdelta1, temdelta2;
                                float theta, anglestep;
                                int uValTwo, uvalOne, uVal;
                            }
                            for(i=1;i<row-2;i++)
                            {
                                for (j = 0; j < col-2; j++)
                                {
                                    /* code */
                                    uValOne = 0; uValTwo =0;
                                    uVal =0;
                                    count=0; delta1=0;delta2=0;
                                    theta=0;cw=0;
                                    anglestep =( / )* (  );
                                    theta = anglestep;

                                    cv=p[i][j];

                                    frstVal=p[i]+[j+1];
                                    lastEle = frstVal;
                                    //print
                                    while (count<7)
                                    {
                                        /* code */
delta1 = tempdelta1 = sin(theta);
delta2 = tempdelta2 = cos(theta);

if (abslocal1((abslocal(tempdelta1)(abslocal(tempdelta2))))<.01)
{
/* code */

delta1=tempdelta1/abslocal(delta1);
delta2= tempdelta2/abslocal(delta2);

}
cw = p[i+  (int)(roundof(delta1), (int) roundof(delta2));]
uValTwo += abslocal ( valassignment(cw-cv)) -  valassignment( lastEle-cv));
theta += angelstep;
lastEle=cv;
count ++;
}
                                    
uValOne = abslocal( valassignment(cw-cv) - valassignment(frstVal - cv));
uVal = uValOne + uValTwo;
     lbp=0;
 if( uVal<=2)
 {
for (k=-1; k< 2; k++)
{
/* code */
for (l = -1; l < 2; l++)
{
/* code */
if (!((k==0) && (l==0)))
{
/* code */
lbp += valassignment(p[i+k][j+1] - p[i][j]);
}

}//inner for


}//outer for
q[i][j]= lbp;

}
else
q[i][j]=9;
} 

 }//inner for
                                
                            }//outer for
}

// routine for lbp

void loacalbinary(unsigned char **p, unsigned char **q, int row, int col, int i, int j)
{
int i, cv, temp=0,t,j, count;
for (i= 1; i<row-2; i++)
{
/* code */
for (j=1; j < col-2; j++)
{
/* code */
temp=0;
count=0;
cv=p[i][j];
for (k=-1; k <2; k++)
{
/* code */
for (l=-1; l < 2; l++)
{
/* code */
t=p[i+k][j+2];
if (!((k==0)&&(l==0)))

{
/* code */
if (t>=cv)
{
/* code */
temp = temp + pow(2, count);
count++;
}

}// inner for


} //outer for
q[i + j] = temp;

}// inner for

}//outer for

return;
}
}

//routine for invariant

void invariant(unsigned char **p, unsigned char **q, int row , int col)
{
    int i, cv, cw, t,j, count;
    unsigned char s, leftshift, rightshift, fv;
    float delta1, delta2, tempdelta1, tempdelta2;

    double theta, anglestep;
    for( i=1; i< row-2; i++)
    {
        for( j=1; j< col-2; j++)
        {
            count=0;
            delta1=0.0; delta2=0.0; theta=0; cw=0;
            s=0*00;
            angelstep=(/)*( );

            cv=p[i][j]
            while(count<8)
            {
                delta1=tempdelta1=sin(theta);
                delta2=tempdelta2=sin(theta);

                if(abslocal((abslocal(tempdelta1)abslocal(tempdelta2)))<.01)
                {
                    delta1=tempdelta1/abslocal(delta1);
                    delta2=tempdelta2/abslocal(delta2);
                }

            cw=p[i+(int) roundof(delta1)] [j+(int) roundoof(delta2)];
             if(cw>=cv)
             {
                t=1;
             }
            else
            {
                t=0;
            }

            theta += angelstep;
            if(t==1)
            s= s | 0*01<< count;
            count++;
            }
            int minval =256;
            for(int n=1;n<8;n++)
            {
                leftshift =s<<n;
                rightshift = s>>(8-n)

                fv= rightshift | leftshift;

                if(fv<minval)
                {
                    q[i][j ]= fv;
                    minval= fv;
                }
            }
        }//inner for

    }//outer for
}//end of function


// routine for contrast
void contrast(unsigned char **p, unsigned **q, int row, int col, int k, int l)
{
    int temp1, temp2, temp, count1, count2, i, j, cv,t;
    float count;

    for( i = 1; i<row-2; i++)
    {
        for(j=1;j<col-2; j++)
        {
            temp1=0;
            temp2=0;
            temp=0;
            count1=0;
            count2=0;
            cv=p[i][j];
            for(k=-1; k<2;k++)

            {
                for( l=-1; l<2;l++)
                {
                    t= p[i+k][j+l];
                    if(!((k==0)&&(l==0)))
                    {
                        if(t>=cv)
                        {
                            temp1=temp1+t;
                            count1++;
                        }
                        else
                        {
                            temp2= temp2+t;
                            count2++;
                        }
                    }
                }//inner
            }//outer
            if(count1 !=0)
        }
    }
}


