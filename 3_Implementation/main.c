#include"pacman.h"
#include"test_pacman.h"
int test_main(void);
int main()
{
   system("cls");
   hidecursor();
   initialize();


   while (1)
   {
      user_input();
      move_figures();
      display();
      show_playfield();
      check_coll();
      Sleep( 10/ 30 );
      set_cursor_position(0,0);
      test_main();
   }

}
