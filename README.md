# parad0x

 Ergodox EZ Keymap

```javascript

/* Keymap 0: Basic layer
 *
 * ,----------------------------------------------------------------.           ,------------------------------------------------------.
 * |     Vol-   |   1     |   2  |   3  |   4  |   5  | LT->3 KC_ESC|           |LT->3 |   6  |   7  |   8  |   9  |    0    |  Vol+   |
 * |------------+---------+------+------+------+--------------------|           |------+------+------+------+------+---------+---------|
 * |      Del   |   Q     |   W  |   E  |   R  |   T  |             |           |      |   Y  |   U  |   I  |   O  |    P    |    Ü    |
 * |------------+---------+------+------+------+------|             |           |      |------+------+------+------+---------+---------|
 * | BkSp LT->1 | A LT->2 |   S  |   D  |   F  |   G  |-------------|           |------|   H  |   J  |   K  |   L  | Ö LT->2 | Ä LT->1 |
 * |------------+---------+------+------+------+------|   Hyper     |           | Meh  |------+------+------+------+---------+---------|
 * |   LShift   | Z Ctrl  |   X  |   C  |   V  |   B  |             |           |      |   N  |   M  |  ,   |   .  |  Ctrl   |  RShift |
 * `------------+---------+------+------+------+--------------------'           `-------------+------+------+------+---------+---------'
 *  |  Apple    |         |  Cut | Copy | Paste |                                      | Undo  |  up  | down |   left  |  right  |
 *  `------------------------------------------'                                      `----------------------------------------'
 *                                                ,-------------.       ,-------------.
 *                                                | Alt  | Cmd  |       |  Cmd | Alt  |
 *                                         ,------|------|------|       |------+--------+------.
 *                                         |      |      | Home |       |      |        |      |
 *                                         | Space| Tab  |------|       |------|  Tab   |Enter |
 *                                         |      |      | End  |       |      |        |      |
 *                                         `--------------------'       `----------------------'
 */

```

```javascript

/* Keymap 1: Symbol Layer
*
* ,---------------------------------------------------.           ,---------------------------------------------------.
* |         |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |           |  F7  |  F8  |  F9  |  F10 |  F11 |  F12 |         |
* |---------+------+------+------+------+------+------|           |------+------+------+------+------+------+---------|
* |         |   !  |   ?  |   '  |   {  |   }  |      |           |      |   #  |   -  |   +  |   *  |      |         |
* |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+---------|
* | [LT->1] |   /  |   *  |   `  |   (  |   )  |------|           |------|   <  |   =  |   >  |      |      | [LT->1] |
* |---------+------+------+------+------+------|      |           |      |------+------+------+------+------+---------|
* |         |   |  |   $  |   "  |   [  |   ]  |      |           |      |   &  |      |   ,  |   .  |      |         |
* `---------+------+------+------+------+-------------'           `-------------+------+------+------+------+---------'
*   |       |      |   %  |   @  |   \  |                                       |      |   ;  |   :  |      |        |
*   `-----------------------------------'                                       `-----------------------------------'
*                                         ,-------------.       ,-------------.
*                                         |      |      |       |      |      |
*                                  ,------|------|------|       |------+------+------.
*                                  |      |      |      |       |      |      |      |
*                                  |  |   |      |------|       |------|      |   &  |
*                                  |      |      |      |       |      |      |      |
*                                  `--------------------'       `--------------------'
*/

```

```javascript

/* Keymap 2: Media and Navigation
 *
 * ,------------------------------------------------------------------------.           ,---------------------------------------------------------------------.
 * |        |           |           |      |            |            |      |           |      |      |           |           |            |         |        |
 * |--------+-----------+-----------+------+------------+------------+------|           |------+------+-----------+-----------+------------+---------+--------|
 * |        | Cmd(Left) | Alt(Left) |  Up  | Alt(Right) | Cmd(Right) |      |           |      |      |  WheelUp  |  MouseUp  | WheelDown  |         |        |
 * |--------+-----------+-----------+------+------------+------------|      |           |      |------+-----------+-----------+------------+---------+--------|
 * |        |  [LT->2]  |    Left   | Down |    Right   |            |------|           |------|      | MouseLeft | MouseDown | MouseRight | [LT->2] |        |
 * |--------+-----------+-----------+------+------------+------------|      |           |      |------+-----------+-----------+------------+---------+--------|
 * |        |           |           |      |            |            |      |           |      |      |           |           |            |         |        |
 * `--------+-----------+-----------+------+------------+-------------------'           `-------------+-----------+-----------+------------+---------+--------'
 *   |      |           |    acc2   | acc1 |   acc0     |                                       |     |           |            |          |          |
 *   `-------------------------------------------------'                                        `---------------------------------------------------'
 *                                                              ,-------------.       ,-------------.
 *                                                              |On/Off|      |       |      |      |
 *                                                       ,------|------|------|       |------+------+------.
 *                                                       |Bright|Bright|      |       |      |      |      |
 *                                                       |ness- |ness+ |------|       |------| Rclk | Lclk |
 *                                                       |      |      |      |       |      |      |      |
 *                                                       `--------------------'       `--------------------'
 */

```

```javascript

/* Keymap 3: Numpad
 *
 * ,-----------------------------------------------------.           ,-----------------------------------------------------.
 * |  Reset |      |      |      |      |      | [LT->3] |           | [LT->3] |      |      |      |      |      |        |
 * |--------+------+------+------+------+----------------|           |---------+------+------+------+------+------+--------|
 * |        |      |   7  |   8  |   9  |      |         |           |         |      |   7  |   8  |   9  |      |        |
 * |--------+------+------+------+------+------|         |           |         |------+------+------+------+------+--------|
 * |        |      |   4  |   5  |   6  |      |---------|           |---------|      |   4  |   5  |   6  |      |        |
 * |--------+------+------+------+------+------|         |           |         |------+------+------+------+------+--------|
 * |        |      |   1  |   2  |   3  |      |         |           |         |      |   1  |   2  |   3  |      |        |
 * `--------+------+------+------+------+----------------'           `----------------+------+------+------+------+--------'
 *   |      |      |      |   0  |      |                                             |      |   0  |      |      |       |
 *   `----------------------------------'                                             `----------------------------------'
 *                                           ,-------------.       ,-------------.
 *                                           |      |      |       |      |      |
 *                                    ,------|------|------|       |------+------+------.
 *                                    |      |      |      |       |      |      |      |
 *                                    |      |      |------|       |------|      |      |
 *                                    |      |      |      |       |      |      |      |
 *                                    `--------------------'       `--------------------'
 */

```
