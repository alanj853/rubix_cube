#include <stdio.h>
#include <stdbool.h>

#define RAND_MAX 53

#define FORWARD 1
#define FORWARD_dash -1
#define BACK 2
#define BACK_dash -2
#define LEFT 3
#define LEFT_dash -3
#define RIGHT 4
#define RIGHT_dash -4
#define UP 5
#define UP_dash -5
#define DOWN 6
#define DOWN_dash -6


    char * front[9];
    char * back[9];
    char * up[9];
    char * down[9];
    char * left[9];
    char * right[9];

void l(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = left[i];

    // rotate left
    left[0] = tmp[6];
    left[1] = tmp[3];
    left[2] = tmp[0];
    left[3] = tmp[7];
    left[4] = tmp[4];
    left[5] = tmp[1];
    left[6] = tmp[8];
    left[7] = tmp[5];
    left[8] = tmp[2];

    // left

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[0] = front[0];
    tmp[3] = front[3];
    tmp[6] = front[6];


    front[0] = up[0];
    front[3] = up[3];
    front[6] = up[6];

    up[0] = back[8];
    up[3] = back[5];
    up[6] = back[2];

    back[8] = down[8];
    back[5] = down[5];
    back[2] = down[2];

    down[8] = tmp[0];
    down[5] = tmp[3];
    down[2] = tmp[6];


}

void l_dash(){
    l();l();l();

}

void r(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = right[i];

    // rotate right
    right[0] = tmp[6];
    right[1] = tmp[3];
    right[2] = tmp[0];
    right[3] = tmp[7];
    right[4] = tmp[4];
    right[5] = tmp[1];
    right[6] = tmp[8];
    right[7] = tmp[5];
    right[8] = tmp[2];

    // right

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[2] = front[2];
    tmp[5] = front[5];
    tmp[8] = front[8];


    front[2] = down[6];
    front[5] = down[3];
    front[8] = down[0];

    down[0] = back[0];
    down[3] = back[3];
    down[6] = back[6];

    back[0] = up[8];
    back[3] = up[5];
    back[6] = up[2];

    up[8] = tmp[8];
    up[5] = tmp[5];
    up[2] = tmp[2];


}

void r_dash(){
    r();r();r();
}

void d(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = down[i];

    // rotate down
    down[0] = tmp[6];
    down[1] = tmp[3];
    down[2] = tmp[0];
    down[3] = tmp[7];
    down[4] = tmp[4];
    down[5] = tmp[1];
    down[6] = tmp[8];
    down[7] = tmp[5];
    down[8] = tmp[2];

    // down

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[6] = front[6];
    tmp[7] = front[7];
    tmp[8] = front[8];


    front[6] = right[6];
    front[7] = right[7];
    front[8] = right[8];

    right[6] = back[6];
    right[7] = back[7];
    right[8] = back[8];

    back[6] = left[6];
    back[7] = left[7];
    back[8] = left[8];

    left[6] = tmp[6];
    left[7] = tmp[7];
    left[8] = tmp[8];


}

void d_dash(){
    d();d();//d();
}

void u(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = up[i];

    // rotate up
    up[0] = tmp[6];
    up[1] = tmp[3];
    up[2] = tmp[0];
    up[3] = tmp[7];
    up[4] = tmp[4];
    up[5] = tmp[1];
    up[6] = tmp[8];
    up[7] = tmp[5];
    up[8] = tmp[2];

    // up

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[0] = front[0];
    tmp[1] = front[1];
    tmp[2] = front[2];


    front[0] = right[0];
    front[1] = right[1];
    front[2] = right[2];

    right[0] = back[0];
    right[1] = back[1];
    right[2] = back[2];

    back[0] = left[0];
    back[1] = left[1];
    back[2] = left[2];

    left[0] = tmp[0];
    left[1] = tmp[1];
    left[2] = tmp[2];


}

void u_dash(){
    u();u();u();
}

void f(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = front[i];

    // rotate front
    front[0] = tmp[6];
    front[1] = tmp[3];
    front[2] = tmp[0];
    front[3] = tmp[7];
    front[4] = tmp[4];
    front[5] = tmp[1];
    front[6] = tmp[8];
    front[7] = tmp[5];
    front[8] = tmp[2];

    // up

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[6] = up[6];
    tmp[7] = up[7];
    tmp[8] = up[8];


    up[6] = left[8];
    up[7] = left[5];
    up[8] = left[2];

    left[2] = down[8];
    left[5] = down[7];
    left[8] = down[6];

    down[8] = right[6];
    down[7] = right[3];
    down[6] = right[0];

    right[6] = tmp[8];
    right[3] = tmp[7];
    right[0] = tmp[6];


}

void f_dash(){
    f();f();f();  
}

void b(){
    char * tmp[9];
    int i;
    for (i = 0; i < 9; i++)
        tmp[i] = back[i];

    // rotate back
    back[0] = tmp[6];
    back[1] = tmp[3];
    back[2] = tmp[0];
    back[3] = tmp[7];
    back[4] = tmp[4];
    back[5] = tmp[1];
    back[6] = tmp[8];
    back[7] = tmp[5];
    back[8] = tmp[2];

    // up

    for (i = 0; i < 9; i++)
        tmp[i] = "";
    tmp[0] = up[0];
    tmp[1] = up[1];
    tmp[2] = up[2];


    up[0] = right[2];
    up[1] = right[5];
    up[2] = right[8];

    right[2] = down[0];
    right[5] = down[1];
    right[8] = down[2];

    down[0] = left[6];
    down[1] = left[3];
    down[2] = left[0];

    left[6] = tmp[0];
    left[3] = tmp[1];
    left[0] = tmp[2];


}

void b_dash(){
    b();b();b();
}

void assign_sides(char * cube[]){
    int cube_index = 0;
    int i = 0;

    for(i = 0; i < 9; i++)
    {
        front[i] = cube[cube_index];
        cube_index++;
    }
    for(i = 0; i < 9; i++)
    {
        back[i] = cube[cube_index];
        cube_index++;
    }
    for(i = 0; i < 9; i++)
    {
        left[i] = cube[cube_index];
        cube_index++;
    }
    for(i = 0; i < 9; i++)
    {
        right[i] = cube[cube_index];
        cube_index++;
    }
    for(i = 0; i < 9; i++)
    {
        up[i] = cube[cube_index];
        cube_index++;
    }
    for(i = 0; i < 9; i++)
    {
        down[i] = cube[cube_index];
        cube_index++;
    }
}

void print_side(char * side[]){
    int i;

    for(i = 0; i < 9; i++)
    {
        printf("%s, ", side[i]);

        if (i == 2 || i == 5 || i == 8)
            printf("\n");
    }

}

void print_cube(){
    // printf("\nFront:\n");
    // print_side(front);
    // printf("Back:\n");
    // print_side(back);
    // printf("Left:\n");
    // print_side(left);
    // printf("Right:\n");
    // print_side(right);
    // printf("Up:\n");
    // print_side(up);
    // printf("Down:\n");
    // print_side(down);
    // printf("\n\n");
    
    int i;

    printf("\n");
    printf("Front: {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", front[i]);
    }
    printf("}\n");
    printf("Back:  {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", back[i]);
    }
    printf("}\n");
    printf("Left:  {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", left[i]);
    }
    printf("}\n");
    printf("Right: {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", right[i]);
    }
    printf("}\n");
    printf("Up:    {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", up[i]);
    }
    printf("}\n");
    printf("Down:  {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", down[i]);
    }
    printf("}\n");

    printf("\n");

}

bool isvalueinarray(int val, int arr[], int size){
    int i;
    for (i=0; i < size; i++) {
        if (arr[i] == val)
            return true;
    }

    // printf("val %d is not in arr: ", val);
    // int j = 0;
    // printf("{");
    // for(j = 0; j < 54 ; j++){
    //     printf("%d, ",arr[j]);
    // }
    // printf("}\n");
    return false;
}

bool contains_single_colour(char * colour, char * arr []){
    int j;
    
    for(j = 0 ; j < 9; j++){
            if (strstr(arr[j], colour) == NULL  ) {
                return false;
            }
        }
    return true;
}

bool side_solved(char * arr []){
    char * colours[6] = {"w", "y", "o", "r", "g", "b"};
    int i;

    for(i = 0; i < 6; i++){
        if(contains_single_colour(colours[i], arr))
            return true;
    }

    return false;
}

bool is_solved(char * side){
    bool front_solved = side_solved(front);
    bool back_solved = side_solved(back);
    bool left_solved = side_solved(left);
    bool right_solved = side_solved(right);
    bool up_solved = side_solved(up);
    bool down_solved = side_solved(down);

    if(strcmp(side, "all") == 0)
        return front_solved && back_solved && left_solved && right_solved && up_solved && down_solved;
    if(strcmp(side, "any") == 0)
        return front_solved || back_solved || left_solved || right_solved || up_solved || down_solved;
    if(strcmp(side, "front") == 0)
        return front_solved;
    if(strcmp(side, "back") == 0)
        return back_solved;
    if(strcmp(side, "left") == 0)
        return left_solved;
    if(strcmp(side, "right") == 0)
        return right_solved;
    if(strcmp(side, "up") == 0)
        return up_solved;
    if(strcmp(side, "down") == 0)
        return down_solved;

    return false;

}

void shuffle(char * cube[]){
    int used_index[54];
    char * temp_cube[54]; 
    int temp_cube_count = 0;
    int cude_index = 0;

    bool arr_shuffled = false;
    int count = 2;

    while(arr_shuffled == false)
    {
        int r = rand() % 54;

        if (r >= 0){

        if(isvalueinarray(r, used_index, 54) == false){
            //printf("This is r: %d\n", r);
            temp_cube[r] = cube[cude_index];
            used_index[temp_cube_count] = r;
            cude_index++;
            temp_cube_count++;
        }

        if(temp_cube_count >= 54 ){
            arr_shuffled = true;
        }
        }
    }
    int i;
    for (i = 0; i < 54; i++){
        cube[i] = temp_cube[i];
    }

}

void move(int movement){
    switch(movement) {
        case FORWARD :
            printf("Moving Forward\n");
            f();
            print_cube();
            break;
        case FORWARD_dash :
            printf("Moving Forward dash\n");
            f_dash();
            print_cube();
            break;
        case BACK :
            printf("Moving Back\n");
            b();
            print_cube();
            break;
        case BACK_dash :
            printf("Moving Back dash\n");
            b_dash();
            print_cube();
            break;
        case UP :
            printf("Moving Up\n");
            u();
            print_cube();
            break;
        case UP_dash :
            printf("Moving Up dash\n");
            u_dash();
            print_cube();
            break;
        case DOWN :
            printf("Moving Down\n");
            d();
            print_cube();
            break;
        case DOWN_dash :
            printf("Moving Down dash\n");
            d_dash();
            print_cube();
            break;
        case LEFT :
            printf("Moving Left\n");
            l();
            print_cube();
            break;
        case LEFT_dash :
            printf("Moving Left dash\n");
            l_dash();
            print_cube();
            break;
        case RIGHT :
            printf("Moving Right\n");
            r();
            print_cube();
            break;
        case RIGHT_dash :
            printf("Moving Right dash\n");
            r_dash();
            print_cube();
            break;
        default :
            printf("Unknown movement (%d)\n", movement);
    }
}

int get_random_no(int max){
    int x = rand() % max;
    x = x + 1;
    int y = rand() % 2;

    if(y == 1)
        return x;
    return x * -1;
}

void make_cube(char * arr[]){

    printf("Making cube ...\n");
    int i, index = 0;
    
    for(i = 0; i < 9; i++){
        arr[index] = front[i];
        index++;
    }
    for(i = 0; i < 9; i++){
        arr[index] = back[i];
        index++;
    }
    for(i = 0; i < 9; i++){
        arr[index] = left[i];
        index++;
    }
    for(i = 0; i < 9; i++){
        arr[index] = right[i];
        index++;
    }
    for(i = 0; i < 9; i++){
        arr[index] = up[i];
        index++;
    }
    for(i = 0; i < 9; i++){
        arr[index] = down[i];
        index++;
    }
        
}

void show_cube(char * arr[]){
    int i;

    printf("\n");
    printf("Front: {");
    for(i = 0; i < 9; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");
    printf("Back:  {");
    for(i = 9; i < 18; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");
    printf("Left:  {");
    for(i = 18; i < 27; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");
    printf("Right: {");
    for(i = 27; i < 36; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");
    printf("Up:    {");
    for(i = 36; i < 45; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");
    printf("Down:  {");
    for(i = 45; i < 54; i++)
    {
        printf(" %s ", arr[i]);
    }
    printf("}\n");

    printf("\n");
}

/**
    Demo to show that all moves, and their reverses, work correctly
    Program runs 1000 random moves, and then does the inverse of each move
    in reverse order. If moves are correct, the cube should be in the
    same state at the end as it was in the beginning
 */
bool demo(){
    char * original[54];
    char * new[54];
    char * reverse[54];
    int i;
    
    
    make_cube(original);


    int move_size = 1000;
    int count = 0;
    int moves[move_size];
    //int moves [] = {2};
    int inverse_moves[move_size];
    int x = 0;

    while((count < move_size || is_solved("all")) && x != 20){
        int x = get_random_no(6);
        // printf("Enter a move: ");                                                                                                                                                                
        // scanf("%d", &x); 
        
        moves[count] = x;
        count++;
    }

    for(i = 0; i < move_size; i++)
        move(moves[i]);

    make_cube(new);

        

    count = 0;

    if(!is_solved("all"))
        while(count < move_size){
            int i = move_size - 1 - count;
            int movement = moves[i];
            int inverse_movement = movement * -1;
            inverse_moves[count] = inverse_movement;
            //printf("movement was: %d --> inverse: %d\n", movement, inverse_movement);
            count++;
    }

    for(i = 0; i < move_size; i++)
        move(inverse_moves[i]);

    make_cube(reverse);

    printf("Original:\n");
    show_cube(original);
    printf("New:\n");
    show_cube(new);
    printf("Original Again:\n");
    show_cube(reverse);


    // do quick check to make sure that original is equal to reverse
    for(i = 0; i < 54; i++)
    {
        if(strcmp(original[i], reverse[i]) != 0){
            printf("Problem at %d: %s != %s\n", i, original[i], reverse[i]);
            return false;
        }
    }
    return true;
}

int main(){

    srand(time(NULL));
    char * squares[54] = {"w1","w2","w3","w4","w5","w6","w7","w8","w9",
                            "y1","y2","y3","y4","y5","y6","y7","y8","y9",
                            "r1","r2","r3","r4","r5","r6","r7","r8","r9",
                            "o1","o2","o3","o4","o5","o6","o7","o8","o9",
                            "g1","g2","g3","g4","g5","g6","g7","g8","g9",
                            "b1","b2","b3","b4","b5","b6","b7","b8","b9"};
    assign_sides(squares);
    printf("Unshuffled Cube:\n\n");
    print_cube();
    printf("\n");

    shuffle(squares);
    assign_sides(squares);
    printf("Shuffled Cube:\n\n");
    print_cube();
    printf("\n");

    //demo();
    bool solved = is_solved("all");
    if(solved){
        printf("Cube Solved:\n\n");
        print_cube();
        printf("\n");
    }
    else{
        printf("Failed\n");
    }


    return 0;
}