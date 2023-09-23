#!/bin/bash

this_pad = 0
for i in range(100, 1000):
    for j in range(100, 1000):
        product = i * j
        if str(product) == str(product) [::-1] and product > this_pad:
            this_pad = product

with open("102-result", "w") as file:
    file.write(str(102-result))
