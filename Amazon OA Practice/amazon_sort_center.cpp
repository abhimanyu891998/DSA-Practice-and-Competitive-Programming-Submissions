//https://blog.csdn.net/bohu83/article/details/99178633
public static void main(String[] args) {
		// TODO Auto-generated method stub
		int [] nums =  new int [] {1, 10, 25, 35, 60};
		int d = 90;
		int[] result = sumclosest(nums,d);
		System.out.println(JSON.toJSON(result));
	}
	
	
	public static int[] sumclosest(int [] nums, int d){
		int [] result = new int [2];
		if( nums == null || nums.length==0|| d<30){
			return result;
		}
		
		int max = Integer.MIN_VALUE;
		Arrays.sort(nums);
		int i=0; int j = nums.length-1;
		
		while(i<j){
	        if(nums[i]+nums[j]<d-30){
	        	if((nums[i]+nums[j])>max){
					max = nums[i]+nums[j];
					result[0] =nums[i];
					result[1] =nums[j];
				}
	        	i++;
	        }else if(nums[i]+nums[j]>d-30){
	        	j--;
	        }
	        else{
	        	result[0] =i;
				result[1] =j;
				break;
	        }			
		}
		return result;

    }