class Solution {
    public int maxSubArray(int[] nums) {
        if(nums.length==0) return Integer.MIN_VALUE;
        if(nums.length==1) return nums[0];
        
        return getSum(nums);
        //return getSum(nums);
        }
   
    //do sum of sub arrays like inorder traversal : L Node Right
    int getSum(int [] arr)
    {   
        
        if(arr.length==1) 
            return arr[0];
        else if(arr.length==2)
        { 
            return Math.max(Math.max(arr[0], arr[1]), arr[0]+ arr[1]);
        }
        else
        { int mid=arr.length/2;
           
          int left=getSum(IntStream.range(0, mid)
								.map(i -> arr[i])
								.toArray());
          int crosssum=subArrSum(arr);
          
          int right=getSum(IntStream.range(mid,arr.length)
								.map(i -> arr[i])
								.toArray());      
        
          return Math.max(crosssum, Math.max(left, right));
   
        }
    }
    
    int subArrSum(int [] arr)
    {  int sum=Integer.MIN_VALUE,mid=arr.length/2,localmax=0;
       //max sum left side to mid
     for(int i=mid-1;i>-1;i--)
     {
          localmax += arr[i];
         sum=Math.max(localmax,sum);
     }
     int l=sum;
     sum=Integer.MIN_VALUE; localmax=0;
     for(int i=mid;i<arr.length;i++)
     {
          localmax += arr[i];
         sum=Math.max(localmax,sum);
     }
     int r=sum;
   
        return l+r;
    }
    
    
    }

