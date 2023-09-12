 #include<utility.h>

main()
{

// ROBOT 1
{
		//hair
			line1(24,0,56,2);
			line1(21,2,59,4);
			line1(18,4,62,6);
			line1(15,6,65,8);
		
		//ears
			line1(70,17,76,26);
			fillscreen(70,19,73,25,219);
			line1(5,17,10,25);
			fillscreen(7,19,10,24,219);
			
		//face
			line1(10,8,70,35);
		
		//brows
			line1(11,10,30,12);
			line1(45,10,64,12);
			
			
		//eyes
			line2(14,13,27,17);
			fillscreen(17,14,24,15,219);
			line2(49,13,60,17);
			fillscreen(52,14,57,16,219);
			
		//nose
			line2(35,16,43,24);
			
		//mouth
			line1(24,27,55,29);
			fillscreen(26,28,53,28,178);
			

}
/*	
// ROBOT 2
	{
		//hair
			line1(16,1,21,8);
			line1(30,1,35,8);
			line1(45,1,50,8);
			line1(59,1,64,8);
	
		//ears
			line2(70,15,76,21);
			fillscreen(70,17,74,19,178);
			line2(5,16,10,23);
			fillscreen(7,18,10,21,219);
	
		//face
			line2(10,8,70,28);
	
		//brows
			//line1(16,11,30,13);
			//line1(50,11,64,13);
			fillscreen(16,11,30,12,178);
			fillscreen(50,11,64,12,178);
	
		//eyes
			line2(16,14,30,20);
			line1(50,14,64,20);
			fillscreen(20,16,26,18,219);
			fillscreen(53,16,61,18,219);
	
		//nose
			line1(36,13,44,20);
	
		//mouth
			line1(24,24,55,26);
			fillscreen(26,25,53,25,178);
	
		//dimples
			line1(19,22,24,24);
			line1(55,22,60,24);
	}
*/
	getche();

}