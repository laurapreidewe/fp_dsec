#!/usr/bin/env python3
# -*- coding: utf-8 -*-
"""
Created on Sat Nov 25 23:43:23 2023

@author: hifzhil
"""

import cv2 as cv
import numpy as np
from  matplotlib import pyplot as plt


def bgr_extraction (bgr_image) :
    b,g,r = cv.split(bgr_image)
    
img = cv.imread()    