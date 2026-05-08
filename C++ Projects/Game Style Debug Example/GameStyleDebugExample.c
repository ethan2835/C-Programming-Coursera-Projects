#include <stdio.h>

int main(void)
{

   /* Game variables using proper types*/
   float posX = 0.0f;       // Player X position
   float posY = 100.0f;     // Player Y position
   float velocityX = 0.0f;
   float velocityY = 0.0f;
   float speed = 8.5f;
   int   health = 100;
   short lives = 3;
   
   float deltaTime = 0.016f;  //~60FPS
   
   
   printf("=== Game Start Debug ===\n");
   printf("Position:  (%.2f, %.2f)  Health: %d   Lives: %hd\n\n",
          posX, posY, health, lives);
		  
	
   /* Simulate 5 frames of movement */
   for(int frame = 1; frame <= 5; frame++)
   {
   
       velocityX = speed;
	   velocityY = -9.8f * deltaTime;
	   
	   
	   posX = posX + velocityX * deltaTime;
	   posY = posY + velocityY * deltaTime;
	   
	   
	   printf("Frame %d: Pos(%.3f, %.3f)  VelX: %g  VelY: %g Health: %d\n",
	          frame, posX, posY, velocityX, velocityY, health);
   }
   
   
   printf("\nSize of position (float): %zu bytes\n", sizeof(posX));
   printf("Size of health (int): %zu bytes\n", sizeof(health));
   
   return 0;
   
}
   