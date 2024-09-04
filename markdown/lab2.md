---
title: "Lab 2:  Transitioning from procedural approach to object oriented approach"
author: "Imran Ali"
date: "2024-08-28"
geometry: "a4paper, margin=1in"
---

 - In lab 1 the code for performing fraction arithmetic had many issues including:
  1. Global variables:  are accessible by all functions, which can lead to unintended modifications.
  2. Poor Encapsulation: the program is difficult to manage and extend.
  3. Difficulty in maintenance and scalability: adding new features or modifying existing ones can lead to complex and error prone code.
  4. Inflexibility: the code is difficult adapt to new requirements. e.g. try adding a function which can calculate powers of fractions such as $(1/2)^2$
- The **[revised code](https://github.com/beyond2013/OOP/blob/master/source/cpp/fractions.cpp)** uses `struct` which simplifies the code, making it more readable, managable and accessible. 

## Tasks for this lab
1. Taking help from the revised code. Try to create a `struct` **Point**. Point represent a point on cartesian coordinate plane. Each point is a pair (x,y) where both x and y are integers.   
2. Write function to calculate Distance between two points.  
The Euclidean distance between two points $(x_1, y_1)$ and $(x_2, y_2)$ in a 2D Cartesian coordinate plane is calculated using the following formula:  
$\text{Distance} = \sqrt{(x_2 - x_1)^2 + (y_2 - y_1)^2}$  
3. Write another function `mid_point`
The formula for finding the midpoint between two points $(x_1, y_1)$ and $(x_2, y_2)$ on a 2D Cartesian coordinate plane is:   
$\text{Midpoint} = \left(\frac{x_1 + x_2}{2}, \frac{y_1 + y_2}{2}\right)$  
4. Write function `translate` to translate a point.  
The formula to translate a point $(x, y)$ by a given translation vector $(dx, dy)$ is:  
$(x', y') = (x + dx, y + dy)$  
5. write `main` function, create 2 point variables and call the above defined functions appropriately. 

### Explanation of distance calculation:
- $(x_1, y_1)$ and $(x_2, y_2)$ are the coordinates of the two points.
- The difference between the x-coordinates $(x_2 - x_1)$ and the difference between the y-coordinates $(y_2 - y_1)$ are squared.
- These squared differences are then summed.
- Finally, the square root of this sum is taken to get the Euclidean distance, which is the straight-line distance between the two points.

### Example:
Given two points  $A(1, 2)$ and $B(4, 6)$, the Euclidean distance between them is calculated as follows:

$\text{Distance} = \sqrt{(4 - 1)^2 + (6 - 2)^2} = \sqrt{3^2 + 4^2} = \sqrt{9 + 16} = \sqrt{25} = 5$

So, the distance between points $A(1, 2)$ and $B(4, 6)$ is 5 units.

### Explanation of Mid Point calculation:
- The midpoint's x-coordinate is the average of the x-coordinates of the two points: $\frac{x_1 + x_2}{2}$.
- The midpoint's y-coordinate is the average of the y-coordinates of the two points: $\frac{y_1 + y_2}{2}$.
- This point lies exactly halfway between the two points on the line segment connecting them.

### Example:
Given two points  $A(1, 2)$ and $B(5, 6)$, the midpoint $M$ is calculated as follows:

$M = \left(\frac{1 + 5}{2}, \frac{2 + 6}{2}\right) = \left(\frac{6}{2}, \frac{8}{2}\right) = (3, 4)$

So, the midpoint between points $A(1, 2)$  and  $B(5, 6)$  is $M(3, 4)$. 


### Explanation of translate calculation:
- **$(x, y)$**: The original coordinates of the point before translation.
- **$(dx, dy)$**: The translation vector, where:
  - $dx$ is the distance to move the point along the x-axis.
  - $dy$ is the distance to move the point along the y-axis.
- **$(x', y')$**: The new coordinates of the point after translation.

### Example:
If you have a point $A(3, 4)$ and you want to translate it by $dx = 2$  units along the x-axis and $dy = -3$ units along the y-axis, the new coordinates  $A'$ will be:

$(x', y') = (3 + 2, 4 + (-3)) = (5, 1)$

So, the point $A(3, 4)$ is translated to $A'(5, 1)$.