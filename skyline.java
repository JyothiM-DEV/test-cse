#include<stdio.h>
#include<conio.h>
public static List<int[]> getSkyline_RuntimeError(int[][] buildings)
 {
         int[] height = new int[10000];
         List<int[]> result = new ArrayList<int[]>();
         int max = 0;
         for(int i = 0; i < buildings.length; i++)
		 {
             int leftX = buildings[i][0], rightX = buildings[i][1], h = buildings[i][2];
             for(int j = leftX; j <= rightX; j++)
			 {
                 height[j] = Math.max(height[j], h);
             }
             max = Math.max(max, rightX);
         }
         for(int i = 1; i < max; i++)
		 {
             if(height[i] > height[i - 1])
			 {
                 int[] tmp = new int[]{i, height[i]
				 };
                 result.add(tmp);
             } else if(height[i] < height[i - 1])
			 {
                 int[] tmp = new int[]{i - 1, height[i]};
                 result.add(tmp);
             }
         }
         if(max != 0)
		 {
             int[] tmp = new int[]{max, 0};
             result.add(tmp);
         }
         return result;
 