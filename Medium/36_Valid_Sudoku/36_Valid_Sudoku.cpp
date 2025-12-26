class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
    {
        std::unordered_map<char, int> table1;
        std::unordered_map<char, int> table2;
        std::unordered_map<char, int> table3;


        int x = 0;
        int y = 0;

        while(x < 9)
        {
            y = 0;
            while(y < 9)
            {
                if(std::isdigit(board[x][y]))
                {
                    if(table1[board[x][y]] != 1)
                        table1[board[x][y]]++;
                    else if (table1[board[x][y]] == 1)
                        return false;
                
                }
                y++;
            }
            table1.clear();
            x++;
        }
        x = 0;
        y = 0;

        while(y < 9)
        {
            x = 0;
            while(x < 9)
            {
                if(std::isdigit(board[x][y]))
                {
                    if(table2[board[x][y]] != 1)
                        table2[board[x][y]]++;
                    else if (table2[board[x][y]] == 1)
                        return false;
                }
                x++;
            }
            table2.clear();
            y++;
        }
        
        int i = 0;
        //func
        int box_row = 0;
        int box_col = 0;
        int board_y = 0;
        int board_x = 0;

        while(box_row < 3)
        {
            box_col = 0;
            while(box_col < 3)
            {
                table3.clear();
                x = 0;
                while(x < 3)
                {
                    y = 0;
                    while(y < 3)
                    {
                        board_y = box_col * 3 + y;
                        board_x = box_row * 3 + x;

                        if(std::isdigit(board[board_x][board_y]))
                        {
                            if(table3[board[board_x][board_y]] != 1)
                                table3[board[board_x][board_y]]++;
                            else if (table3[board[board_x][board_y]] == 1)
                                return false;
                        }    
                        y++;   
                    }
                    x++;
                }
                box_col++;
            }
            box_row++;
        }

        return true;
        
    }
};