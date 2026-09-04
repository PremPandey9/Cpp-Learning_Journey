#include <iostream>

int main(){

    std::cout << "WELCOME TO MYSTERY ADVENTURE\n\n";
    std::cout << "The Secret of Blackwood Mansion\n\n";
    
    std::cout << "Scene 1 — The Forest\n\n";
    std::cout << "You are walking home late at night when a heavy storm suddenly begins.\n" << "You lose your way and discover an old road leading deep into the forest.\n" << "After walking for several minutes, you see a huge abandoned mansion.\n";
    std::cout << "A broken sign reads: \n" << "BLACKWOOD MANSION\n" << "Lightning strikes nearby.\n";
    
    
    int forest;
    std::cout << "\nYou have two choices: \n";
    std::cout << "1. Enter the mansion\n";
    std::cout << "2. Continue through the forest\n";
    std::cout << "Enter Your Choice: ";
    std::cin >> forest;


    switch (forest)
    {
    case 1:
        std::cout << "You push the giant wooden door.\n" << "CREAAAAK...\n" << "The door opens by itself.\n" << "Inside, the mansion is completely dark.\n";
        std::cout << "You hear a strange sound coming from upstairs.\n";
        
        
        int mansion;
        std::cout << "1. Go Upstairs.\n";
        std::cout << "2. Explore The Living Room\n";
        std::cout << "Enter Your Choice: ";
        std::cin >> mansion;
        
        
        switch (mansion)
        {
        case 1:
            std::cout << "You climb the old staircase.\n" << "Every step makes a loud CREAK.\n" << "At the end of the hallway, you find a locked bedroom.\n" << "Beside the door is an old painting.\n" << "The painting shows a man holding a golden key.\n" << "Suddenly...\n";
            std::cout << "You hear footsteps behind you.\n";
            int upstairs;
            std::cout << "1. Turn around\n";
            std::cout << "2. Try to open the bedroom\n";
            std::cout << "Enter Your Choice: ";
            std::cin >> upstairs;
            switch (upstairs)
            {
            case 1:
                std::cout << "You slowly turn around.\n" << "There is nobody there.\n" << "The footsteps stop.\n" << "You look back at the bedroom.\n";
                std::cout << "The door is still locked.\n";
                
                int turn;
                std::cout << "1. Search the hallway\n";
                std::cout << "2. Try the bedroom door again\n";
                std::cout << "Enter Your Choice: ";
                std::cin >> turn;

                switch (turn)
                {
                case 1:
                    
                    std::cout << "\nYou search the hallway carefully.\n";
                    std::cout << "Behind an old painting, you discover a small inscription.\n";
                    std::cout << "\"What you seek lies beneath the house.\"\n";
                    std::cout << "\nCLUE FOUND!\n";
                    std::cout << "The clue suggests that something important is hidden underground.\n";
                    std::cout << "You now realize that the mansion is hiding something beneath it.\n\n";
                    
                    int hallyway;
                    std::cout << "1. Search the mansion for the golden key\n";
                    std::cout << "2. Leave the hallway\n";
                    std::cout << "Enter Your Choice: ";
                    std::cin >> hallyway;

                    switch (hallyway)
                    {
                    case 1:
                        std::cout << "\nYou decide to search the mansion for the golden key.\n";
                        std::cout << "You remember the strange living room and its bookshelf.\n";
                        std::cout << "You go downstairs to investigate.\n";
                        std::cout << "\nYou enter the living room.\n";
                        std::cout << "There is an old fireplace and a large bookshelf.\n";
                        std::cout << "While searching the room, you discover a hidden button behind a book.\n";
                        std::cout << "You press it.\n";
                        std::cout << "CLICK!\n";
                        std::cout << "A secret passage opens behind the bookshelf.\n";

                        int living_room;
                        std::cout << "\n1. Enter the secret passage\n";
                        std::cout << "2. Close the passage and leave\n";
                        std::cout << "Enter Your Choice: ";
                        std::cin >> living_room;

                        if (living_room == 1)
                        {
                            std::cout << "\nYou enter the secret passage.\n";
                            std::cout << "It is extremely dark.\n";
                            std::cout << "You find a torch on the wall and light it.\n";
                            std::cout << "The passage leads to an underground room.\n";
                            std::cout << "In the middle of the room is a large wooden chest.\n";
                            std::cout << "But the chest is locked.\n";
                            std::cout << "\nSUN   MOON   STAR\n";
                            std::cout << "Below them is a small note:\n";
                            std::cout << "The sun rises before the moon, and the stars appear last.\n";

                            int order;
                            bool haskey = false;

                            std::cout << "\nYou need to figure out the correct order.\n";
                            std::cout << "1. SUN MOON STAR\n";
                            std::cout << "2. STAR MOON SUN\n";
                            std::cout << "3. MOON STAR SUN\n";

                            for (int attempt = 1; attempt <= 3; attempt++)
                            {
                                std::cout << "\nAttempt " << attempt << " Of 3\n";
                                std::cout << "Choose The Correct Figure: ";
                                std::cin >> order;

                                if (order == 1)
                                {
                                    std::cout << "The symbols glow.\n";
                                    std::cout << "The chest opens.\n";
                                    std::cout << "Inside is a golden key.\n";

                                    haskey = true;
                                    break;
                                }
                                else
                                {
                                    std::cout << "Incorrect! The symbols remain dark.\n";
                                }
                            }

                            if (!haskey)
                            {
                                std::cout << "\nThe chest suddenly locks permanently.\n";
                                std::cout << "You hear a terrifying sound behind you.\n";
                                std::cout << "\n========================================\n";
                                std::cout << "              GAME OVER\n";
                                std::cout << "========================================\n";
                            }
                            else
                            {
                                std::cout << "\nYou found the golden key!\n";
                                std::cout << "You remember the locked bedroom upstairs.\n";
                                std::cout << "You return to the second floor with the golden key.\n\n";
                                std::cout << "You stand in front of the locked bedroom.\n";
                                std::cout << "You insert the golden key into the lock.\n" << "CLICK..." << "The door slowly opens.\n" << "Inside is an old dusty bedroom.\n" << "There is an old desk in the corner.\n" << "On the desk you find a mysterious letter.\n" << "The letter says:\n";
                                std::cout << "\"If you have found this room, you have discovered the secret of Blackwood Mansion.\"\n\n";
                                std::cout << "Then it says:\n" << "\"The treasure is hidden beneath the mansion.\"\n";
                                int hidn;
                                std::cout << "1. Open the hidden door\n";
                                std::cout << "2. Read the rest of the letter\n";
                                std::cout << "Your Choices:";
                                std::cin >> hidn;

                                switch (hidn)
                                {
                                case 1:
                                {
                                    std::cout << "The moment you open the hidden door, a freezing wind blows through the room.\n";
                                    std::cout << "The lights go out.\n";
                                    std::cout << "Everything becomes silent.\n";
                                    std::cout << "Then...\n";
                                    std::cout << "A dark shadow appears in front of you.\n";
                                    std::cout << "A mysterious voice asks:\n";
                                    std::cout << "\"Why have you come here?\"\n";

                                    int speak;
                                    std::cout << "Your Choices:\n";
                                    std::cout << "1. Tell the truth\n";
                                    std::cout << "2. Run away\n";
                                    std::cin >> speak;
                                    switch (speak)
                                    {
                                    case 1:
                                    {
                                    std::cout << "You take a deep breath.\n";
                                    std::cout << "You say:\n";
                                    std::cout << "\"I was lost in the forest. I only came here looking for shelter.\"\n";
                                    std::cout << "The shadow becomes silent.\n";
                                    std::cout << "Then it says:\n";
                                    std::cout << "\"You are not here for greed.\"\n";
                                    std::cout << "The shadow slowly disappears.\n";

                                    std::cout << "A hidden staircase appears beneath the floor.\n";
                                    std::cout << "You realize you have discovered the entrance to the mansion's underground chamber.\n";

                                    int final;
                                    std::cout << "\nYour Choices:\n";
                                    std::cout << "1. Go downstairs\n";
                                    std::cout << "2. Leave the mansion\n";
                                    std::cin >> final;

                                    switch (final)
                                    {
                                    case 1:
                                        std::cout << "\nFinal Scene — The Treasure\n";
                                        std::cout << "You slowly descend the hidden staircase.\n";
                                        std::cout << "The stairs seem endless.\n";
                                        std::cout << "Finally, you reach the bottom.\n";
                                        std::cout << "A gigantic underground chamber appears before you.\n";
                                        std::cout << "In the center is an ancient treasure chest.\n";
                                        std::cout << "You walk toward it.\n";
                                        std::cout << "You open the chest.\n";
                                        std::cout << "Inside you discover:\n";
                                        std::cout << "Gold coins\n";
                                        std::cout << "Diamonds\n";
                                        std::cout << "An ancient map\n";
                                        std::cout << "A mysterious silver key\n\n";
                                        std::cout << "You finally understand the secret of Blackwood Mansion.\n";
                                        std::cout << "The mansion wasn't abandoned.\n";
                                        std::cout << "It was built to protect the treasure.\n";
                                        std::cout << "The guardian had been waiting for someone brave enough to discover the truth.\n";
                                        std::cout << "And you solved the mystery.\n";
                                        std::cout << "\n========================================\n";
                                        std::cout << "          MYSTERY SOLVED!\n";
                                        std::cout << "  You survived Blackwood Mansion\n";
                                        std::cout << "and discovered its hidden treasure.\n";
                                        std::cout << "      CONGRATULATIONS, DETECTIVE!\n";
                                        std::cout << "           THE END\n";
                                        std::cout << "========================================\n";
                                        break;

                                    case 2:
                                        std::cout << "You leave the mansion.\n";
                                        std::cout << "ENDING - ESCAPE\n";
                                        break;

                                    default:
                                        std::cout << "Invalid choice.\n";
                                        std::cout << "You leave the mansion.\n";
                                        std::cout << "ENDING - ESCAPE\n";
                                        break;
                                    }
                                    break;
                                case 2:
                                {
                                    std::cout << "You continue reading the letter.\n";
                                    std::cout << "The final sentence says:\n";
                                    std::cout << "\"Only the brave may discover what lies beneath.\"\n";
                                    std::cout << "You realize the hidden door is probably the entrance to the treasure.\n";
                                    std::cout << "\nYou decide to open the hidden door.\n";

                                    std::cout << "The moment you open the hidden door, a freezing wind blows through the room.\n";
                                    std::cout << "The lights go out.\n";
                                    std::cout << "Everything becomes silent.\n";
                                    std::cout << "Then...\n";
                                    std::cout << "A dark shadow appears in front of you.\n";
                                    std::cout << "A mysterious voice asks:\n";
                                    std::cout << "\"Why have you come here?\"\n";

                                    int speak2;
                                    std::cout << "\nYour Choices:\n";
                                    std::cout << "1. Tell the truth\n";
                                    std::cout << "2. Run away\n";
                                    std::cin >> speak2;

                                    if (speak2 == 1)
                                    {
                                        std::cout << "You take a deep breath.\n";
                                        std::cout << "You say:\n";
                                        std::cout << "\"I was lost in the forest. I only came here looking for shelter.\"\n";
                                        std::cout << "The shadow becomes silent.\n";
                                        std::cout << "Then it says:\n";
                                        std::cout << "\"You are not here for greed.\"\n";
                                        std::cout << "The shadow slowly disappears.\n";
                                        std::cout << "A hidden staircase appears beneath the floor.\n";

                                        int final2;
                                        std::cout << "\n1. Go downstairs\n";
                                        std::cout << "2. Leave the mansion\n";
                                        std::cin >> final2;

                                        if (final2 == 1)
                                        {
                                            std::cout << "\nFinal Scene — The Treasure\n";
                                            std::cout << "You slowly descend the hidden staircase.\n";
                                            std::cout << "The stairs seem endless.\n";
                                            std::cout << "Finally, you reach the bottom.\n";
                                            std::cout << "A gigantic underground chamber appears before you.\n";
                                            std::cout << "In the center is an ancient treasure chest.\n";
                                            std::cout << "You walk toward it.\n";
                                            std::cout << "You open the chest.\n";
                                            std::cout << "Inside you discover:\n";
                                            std::cout << "Gold coins\n";
                                            std::cout << "Diamonds\n";
                                            std::cout << "An ancient map\n";
                                            std::cout << "A mysterious silver key\n\n";
                                            std::cout << "You finally understand the secret of Blackwood Mansion.\n";
                                            std::cout << "The mansion wasn't abandoned.\n";
                                            std::cout << "It was built to protect the treasure.\n";
                                            std::cout << "The guardian had been waiting for someone brave enough to discover the truth.\n";
                                            std::cout << "And you solved the mystery.\n";
                                            std::cout << "\n========================================\n";
                                            std::cout << "          MYSTERY SOLVED!\n";
                                            std::cout << "  You survived Blackwood Mansion\n";
                                            std::cout << "and discovered its hidden treasure.\n";
                                            std::cout << "      CONGRATULATIONS, DETECTIVE!\n";
                                            std::cout << "           THE END\n";
                                            std::cout << "========================================\n";
                                        }
                                        else
                                        {
                                            std::cout << "You leave the mansion.\n";
                                            std::cout << "ENDING - ESCAPE\n";
                                        }
                                    }
                                    else if (speak2 == 2)
                                    {
                                        std::cout << "You turn around and run toward the door.\n";
                                        std::cout << "BOOM!\n";
                                        std::cout << "The door slams shut.\n";
                                        std::cout << "The room becomes completely dark.\n";
                                        std::cout << "The guardian whispers:\n";
                                        std::cout << "\"You should never have entered.\"\n";
                                        std::cout << "\n========================================\n";
                                        std::cout << "GAME OVER\n";
                                        std::cout << "========================================\n";
                                    }
                                    else
                                    {
                                        std::cout << "Invalid choice.\n";
                                        std::cout << "GAME OVER\n";
                                    }
                                    break;
                                }

                            default:
                                std::cout << "Invalid choice.\n";
                                std::cout << "You leave the bedroom.\n";
                                std::cout << "ENDING - ESCAPE\n";
                                break;
                            }
            
        
                        
                        }
                        else
                        {
                            std::cout << "\nYou close the secret passage.\n";
                            std::cout << "You decide the mansion is too dangerous.\n";
                            std::cout << "You leave the mansion.\n";
                            std::cout << "ENDING - ESCAPE\n";
                        }
                        break;
                    case 2:
                        std::cout << "\nYou leave the hallway.\n";
                        break;
                    }
                case 2:
                    std::cout << "You try the door.\n" << "CLICK...\n" << "But it doesn't open.\n" << "The bedroom is locked.\n" << "You remember the golden key from the painting.\n";
                    std::cout << "You decide: \n";
                    int key;
                    std::cout << "1. Search the mansion for the golden key\n";
                    std::cout << "2. Leave the hallway\n";
                    std::cout << "Enter Your Choice: ";
                    std::cin >> key;

                    if (key == 1)
                    {
                        std::cout << "\nYou decide to search the mansion for the golden key.\n";
                        std::cout << "You remember the strange living room and its bookshelf.\n";
                        std::cout << "You go downstairs to investigate.\n";

                        std::cout << "\nYou enter the living room.\n";
                        std::cout << "There is an old fireplace and a large bookshelf.\n";
                        std::cout << "While searching the room, you discover a hidden button behind a book.\n";
                        std::cout << "You press it.\n";
                        std::cout << "CLICK!\n";
                        std::cout << "A secret passage opens behind the bookshelf.\n";

                        int living_room;
                        std::cout << "\n1. Enter the secret passage\n";
                        std::cout << "2. Close the passage and leave\n";
                        std::cout << "Enter Your Choice: ";
                        std::cin >> living_room;

                        if (living_room == 1)
                        {
                            std::cout << "\nYou enter the secret passage.\n";
                            std::cout << "It is extremely dark.\n";
                            std::cout << "You find a torch on the wall and light it.\n";
                            std::cout << "The passage leads to an underground room.\n";
                            std::cout << "In the middle of the room is a large wooden chest.\n";
                            std::cout << "But the chest is locked.\n";
                            std::cout << "\nSUN   MOON   STAR\n";
                            std::cout << "Below them is a small note:\n";
                            std::cout << "The sun rises before the moon, and the stars appear last.\n";

                            int order;
                            bool haskey = false;

                            std::cout << "\nYou need to figure out the correct order.\n";
                            std::cout << "1. SUN MOON STAR\n";
                            std::cout << "2. STAR MOON SUN\n";
                            std::cout << "3. MOON STAR SUN\n";

                            for (int attempt = 1; attempt <= 3; attempt++)
                            {
                                std::cout << "\nAttempt " << attempt << " Of 3\n";
                                std::cout << "Choose The Correct Figure: ";
                                std::cin >> order;

                                if (order == 1)
                                {
                                    std::cout << "The symbols glow.\n";
                                    std::cout << "The chest opens.\n";
                                    std::cout << "Inside is a golden key.\n";

                                    haskey = true;
                                    break;
                                }
                                else
                                {
                                    std::cout << "Incorrect! The symbols remain dark.\n";
                                }
                            }

                            if (!haskey)
                            {
                                std::cout << "\nThe chest suddenly locks permanently.\n";
                                std::cout << "You hear a terrifying sound behind you.\n";
                                std::cout << "\n========================================\n";
                                std::cout << "              GAME OVER\n";
                                std::cout << "========================================\n";
                            }
                            else
                            {
                                std::cout << "\nYou found the golden key!\n";
                                std::cout << "You remember the locked bedroom upstairs.\n";
                                std::cout << "You return to the second floor with the golden key.\n\n";
                                std::cout << "You stand in front of the locked bedroom.\n";
                                std::cout << "You insert the golden key into the lock.\n" << "CLICK..." << "The door slowly opens.\n" << "Inside is an old dusty bedroom.\n" << "There is an old desk in the corner.\n" << "On the desk you find a mysterious letter.\n" << "The letter says:\n";
                                std::cout << "\"If you have found this room, you have discovered the secret of Blackwood Mansion.\"\n\n";
                                std::cout << "Then it says:\n" << "\"The treasure is hidden beneath the mansion.\"\n";
                                int hidn;
                                std::cout << "1. Open the hidden door\n";
                                std::cout << "2. Read the rest of the letter\n";
                                std::cout << "Your Choices:";
                                std::cin >> hidn;

                                switch (hidn)
                                {
                                case 1:
                                    std::cout << "The moment you open the hidden door, a freezing wind blows through the room.\n" << "The lights go out.\n" << "Everything becomes silent.\n" << "Then...\n" << "A dark shadow appears in front of you.\n" << "A mysterious voice asks:\n";
                                    std::cout << "\"Why have you come here?\"\n";
                                    int speak;
                                    std::cout << "Your Choices:";
                                    std::cout << "1. Tell the truth\n";
                                    std::cout << "2. Run away\n";
                                    std::cin >> speak;

                                    switch (speak)
                                    {
                                    case 1:
                                        std::cout << "You take a deep breath.\n" << "You say:\n" << "\"I was lost in the forest. I only came here looking for shelter.\"\n" << "The shadow becomes silent.\n" << "Then it says:\n" << "\"You are not here for greed.\"\n" << "The shadow slowly disappears.\n";
                                        std::cout << "A hidden staircase appears beneath the floor.\n" << "You realize you have discovered the entrance to the mansion's underground chamber.\n";
                                        int final;
                                        std::cout << "Your Choices:";
                                        std::cout << "1. Go downstairs\n";
                                        std::cout << "2. Leave the mansion\n";
                                        std::cin >> final;

                                        switch (final)
                                        {
                                        case 1:
                                            std::cout << "\n Final Scene — The Treasure\n";
                                            std::cout << "You slowly descend the hidden staircase.\n" << "The stairs seem endless.\n" << "Finally, you reach the bottom.\n" << "A gigantic underground chamber appears before you.\n" << "In the center is an ancient treasure chest.\n" << "You walk toward it.\n" << "You open the chest.";
                                            std::cout << "Inside you discover:\n";
                                            std::cout << "Gold coins\n";
                                            std::cout << "Diamonds\n";
                                            std::cout << "An ancient map\n";
                                            std::cout << "A mysterious silver key\n\n";
                                            std::cout << "You finally understand the secret of Blackwood Mansion.\n" << "The mansion wasn't abandoned.\n" << "It was built to protect the treasure.\n" << "The guardian had been waiting for someone brave enough to discover the truth.\n";
                                            std::cout << "And you solved the mystery.\n";
                                            std::cout <<"\n========================================\n";
                                            std::cout << "          MYSTERY SOLVED!            \n";
                                            std::cout << "  You survived Blackwood Mansion\n";
                                            std::cout << "and discovered its hidden treasure.\n";
                                            std::cout << "      CONGRATULATIONS, DETECTIVE!\n";
                                            std::cout << "           THE END\n";
                                            std::cout << "========================================\n";

                                            break;
                                        case 2:
                                            std::cout << "You Leave The mansion\n";
                                            break;
                                        default:
                                            break;
                                        }
                                        break;
                                    case 2:
                                        std::cout << "You turn around and run toward the door.\n" << "BOOM!\n" << "The door slams shut.\n" << "The room becomes completely dark.\n" << "The guardian whispers:\n";
                                        std::cout << "\"You should never have entered.\"\n";
                                        std::cout <<"\n========================================\n";
                                        std::cout << "GAME OVER\n";
                                        std::cout << "========================================\n";
                                        break;
                                    default:
                                        break;
                                    }
                                    break;
                                case 2:
                                    std::cout << "You continue reading the letter.\n";
                                    std::cout << "The final sentence says:\n" << "\"Only the brave may discover what lies beneath.\"\n";
                                    std::cout << "You realize the hidden door is probably the entrance to the treasure.\n";
                                    break;
                                default:
                                    break;
                                }
                            }
                    
                        }
                        else if (living_room == 2)
                        {
                            std::cout << "\nYou close the secret passage.\n";
                            std::cout << "You decide the mansion is too dangerous.\n";
                            std::cout << "You leave the mansion.\n";
                            std::cout << "ENDING - ESCAPE\n";
                        }
                    }
                    else if (key == 2)
                    {
                    std::cout << "\nYou leave the hallway.\n";
                    }

                    
                    
                }
            
                break;

            case 2:
                std::cout << "You try the door.\n" << "CLICK...\n" << "But it doesn't open.\n" << "The bedroom is locked.\n" << "You remember the golden key from the painting.\n";
                std::cout << "You decide: \n";
                int key;
                std::cout << "1. Search the mansion for the golden key\n";
                std::cout << "2. Leave the hallway\n";
                std::cout << "Enter Your Choice: ";
                std::cin >> key;

                if (key == 1)
                {
                    std::cout << "\nYou decide to search the mansion for the golden key.\n";
                    std::cout << "You remember the strange living room and its bookshelf.\n";
                    std::cout << "You go downstairs to investigate.\n";

                    std::cout << "\nYou enter the living room.\n";
                    std::cout << "There is an old fireplace and a large bookshelf.\n";
                    std::cout << "While searching the room, you discover a hidden button behind a book.\n";
                    std::cout << "You press it.\n";
                    std::cout << "CLICK!\n";
                    std::cout << "A secret passage opens behind the bookshelf.\n";

                    int living_room;
                    std::cout << "\n1. Enter the secret passage\n";
                    std::cout << "2. Close the passage and leave\n";
                    std::cout << "Enter Your Choice: ";
                    std::cin >> living_room;

                    if (living_room == 1)
                    {
                        std::cout << "\nYou enter the secret passage.\n";
                        std::cout << "It is extremely dark.\n";
                        std::cout << "You find a torch on the wall and light it.\n";
                        std::cout << "The passage leads to an underground room.\n";
                        std::cout << "In the middle of the room is a large wooden chest.\n";
                        std::cout << "But the chest is locked.\n";
                        std::cout << "\nSUN   MOON   STAR\n";
                        std::cout << "Below them is a small note:\n";
                        std::cout << "The sun rises before the moon, and the stars appear last.\n";

                        int order;
                        bool haskey = false;

                        std::cout << "\nYou need to figure out the correct order.\n";
                        std::cout << "1. SUN MOON STAR\n";
                        std::cout << "2. STAR MOON SUN\n";
                        std::cout << "3. MOON STAR SUN\n";

                        for (int attempt = 1; attempt <= 3; attempt++)
                        {
                            std::cout << "\nAttempt " << attempt << " Of 3\n";
                            std::cout << "Choose The Correct Figure: ";
                            std::cin >> order;

                            if (order == 1)
                            {
                                std::cout << "The symbols glow.\n";
                                std::cout << "The chest opens.\n";
                                std::cout << "Inside is a golden key.\n";

                                haskey = true;
                                break;
                            }
                            else
                            {
                                std::cout << "Incorrect! The symbols remain dark.\n";
                            }
                        }

                        if (!haskey)
                        {
                            std::cout << "\nThe chest suddenly locks permanently.\n";
                            std::cout << "You hear a terrifying sound behind you.\n";
                            std::cout << "\n========================================\n";
                            std::cout << "              GAME OVER\n";
                            std::cout << "========================================\n";
                        }
                        else
                        {
                            std::cout << "\nYou found the golden key!\n";
                            std::cout << "You remember the locked bedroom upstairs.\n";
                            std::cout << "You return to the second floor with the golden key.\n\n";
                            std::cout << "You stand in front of the locked bedroom.\n";
                            std::cout << "You insert the golden key into the lock.\n" << "CLICK..." << "The door slowly opens.\n" << "Inside is an old dusty bedroom.\n" << "There is an old desk in the corner.\n" << "On the desk you find a mysterious letter.\n" << "The letter says:\n";
                            std::cout << "\"If you have found this room, you have discovered the secret of Blackwood Mansion.\"\n\n";
                            std::cout << "Then it says:\n" << "\"The treasure is hidden beneath the mansion.\"\n";
                            int hidn;
                            std::cout << "1. Open the hidden door\n";
                            std::cout << "2. Read the rest of the letter\n";
                            std::cout << "Your Choices:";
                            std::cin >> hidn;

                            switch (hidn)
                            {
                            case 1:
                                std::cout << "The moment you open the hidden door, a freezing wind blows through the room.\n" << "The lights go out.\n" << "Everything becomes silent.\n" << "Then...\n" << "A dark shadow appears in front of you.\n" << "A mysterious voice asks:\n";
                                std::cout << "\"Why have you come here?\"\n";
                                int speak;
                                std::cout << "Your Choices:";
                                std::cout << "1. Tell the truth\n";
                                std::cout << "2. Run away\n";
                                std::cin >> speak;

                                switch (speak)
                                    {
                                case 1:
                                    std::cout << "You take a deep breath.\n" << "You say:\n" << "\"I was lost in the forest. I only came here looking for shelter.\"\n" << "The shadow becomes silent.\n" << "Then it says:\n" << "\"You are not here for greed.\"\n" << "The shadow slowly disappears.\n";
                                    std::cout << "A hidden staircase appears beneath the floor.\n" << "You realize you have discovered the entrance to the mansion's underground chamber.\n";
                                    int final;
                                    std::cout << "Your Choices:";
                                    std::cout << "1. Go downstairs\n";
                                    std::cout << "2. Leave the mansion\n";
                                    std::cin >> final;

                                    switch (final)
                                    {
                                    case 1:
                                        std::cout << "\n Final Scene — The Treasure\n";
                                        std::cout << "You slowly descend the hidden staircase.\n" << "The stairs seem endless.\n" << "Finally, you reach the bottom.\n" << "A gigantic underground chamber appears before you.\n" << "In the center is an ancient treasure chest.\n" << "You walk toward it.\n" << "You open the chest.";
                                        std::cout << "Inside you discover:\n";
                                        std::cout << "Gold coins\n";
                                        std::cout << "Diamonds\n";
                                        std::cout << "An ancient map\n";
                                        std::cout << "A mysterious silver key\n\n";
                                        std::cout << "You finally understand the secret of Blackwood Mansion.\n" << "The mansion wasn't abandoned.\n" << "It was built to protect the treasure.\n" << "The guardian had been waiting for someone brave enough to discover the truth.\n";
                                        std::cout << "And you solved the mystery.\n";
                                        std::cout <<"\n========================================\n";
                                        std::cout << "          MYSTERY SOLVED!            \n";
                                        std::cout << "  You survived Blackwood Mansion\n";
                                        std::cout << "and discovered its hidden treasure.\n";
                                        std::cout << "      CONGRATULATIONS, DETECTIVE!\n";
                                        std::cout << "           THE END\n";
                                        std::cout << "========================================\n";

                                        break;
                                    case 2:
                                        std::cout << "You Leave The mansion\n";
                                        break;
                                    default:
                                        break;
                                    }
                                    break;
                                case 2:
                                    std::cout << "You turn around and run toward the door.\n" << "BOOM!\n" << "The door slams shut.\n" << "The room becomes completely dark.\n" << "The guardian whispers:\n";
                                    std::cout << "\"You should never have entered.\"\n";
                                    std::cout <<"\n========================================\n";
                                    std::cout << "GAME OVER\n";
                                    std::cout << "========================================\n";
                                    break;
                                default:
                                    break;
                                }
                                break;
                            case 2:
                                std::cout << "You continue reading the letter.\n";
                                std::cout << "The final sentence says:\n" << "\"Only the brave may discover what lies beneath.\"\n";
                                std::cout << "You realize the hidden door is probably the entrance to the treasure.\n";
                                break;
                            default:
                                break;
                            }
                        }
                    
                    }
                    else if (living_room == 2)
                    {
                        std::cout << "\nYou close the secret passage.\n";
                        std::cout << "You decide the mansion is too dangerous.\n";
                        std::cout << "You leave the mansion.\n";
                        std::cout << "ENDING - ESCAPE\n";
                    }
                }
                else if (key == 2)
                {
                std::cout << "\nYou leave the hallway.\n";
                }

                    
                    
            }
            break;
            
        case 2:
            std::cout << "You enter the living room.\n" << "There is an old fireplace and a large bookshelf.\n" << "While searching the room, you discover a hidden button behind a book.\n" << "You press it.\n" << "CLICK!\n";
            std::cout << "A secret passage opens behind the bookshelf.\n";
            
            
            int living_room;
            std::cout << "1. Enter the secret passage\n";
            std::cout << "2.  Close the passage and leave\n";
            std::cout << "Enter Your Choice: ";
            std::cin >> living_room;

            switch (living_room)
            {
            case 1:
            {
            std::cout << "You enter the secret passage.\n" << "It is extremely dark.\n" << "You find a torch on the wall and light it.\n" << "The passage leads to an underground room.\n" << "In the middle of the room is a large wooden chest.\n" << "But the chest is locked.\n";
            std::cout << "But the chest is locked.\n";
            std::cout << "SUN   MOON   STAR\n";
            std::cout << "Below them is a small note: \n" << "The sun rises before the moon, and the stars appear last.\n";
            int order;
            bool haskey = false;

            std::cout << "You need to figure out the correct order.\n";
            std::cout << "1. SUN MOON STAR\n";
            std::cout << "2. STAR MOON SUN\n";
            std::cout << "3. MOON STAR SUN\n";

            for (int attempt = 1; attempt <= 3; attempt++)
            {
                std::cout << "\nAttemps" << attempt << "Of 3\n";
                std::cout << "Choose The Correct Figure: \n";
                std::cin >> order;

                if (order == 1)
                {
                    std::cout << "The symbols glow." << "The chest opens.\n" << "Inside is a golden key.\n";
                        
                    haskey = true;
                        
                    break;
                }
                else{
                    std::cout << "Incorrect!, The symbols remain dark.\n";
                }
                    
            }
            if (!haskey)
            {
                std::cout << "\nThe chest suddenly locks permanently.\n";
                std::cout << "You hear a terrifying sound behind you.\n";
                std::cout << "\n========================================\n";
                std::cout << "Tusha Nii Ho Pyga Lowda....., Ja Ghar Ja.....";
                std::cout << "              GAME OVER\n";
                std::cout << "========================================\n";
            }
            else{
                std::cout << "\nYou remember the locked bedroom upstairs.\n";
                std::cout << "You return to the second floor with the golden key.\n\n";
                std::cout << "You stand in front of the locked bedroom.\n";
                std::cout << "You insert the golden key into the lock.\n" << "CLICK..." << "The door slowly opens.\n" << "Inside is an old dusty bedroom.\n" << "There is an old desk in the corner.\n" << "On the desk you find a mysterious letter.\n" << "The letter says:\n";
                std::cout << "\"If you have found this room, you have discovered the secret of Blackwood Mansion.\"\n\n";
                std::cout << "Then it says:\n" << "\"The treasure is hidden beneath the mansion.\"\n";
                int hidn;
                std::cout << "1. Open the hidden door\n";
                std::cout << "2. Read the rest of the letter\n";
                std::cout << "Your Choices:";
                std::cin >> hidn;

                switch (hidn)
                {
                case 1:
                    std::cout << "The moment you open the hidden door, a freezing wind blows through the room.\n" << "The lights go out.\n" << "Everything becomes silent.\n" << "Then...\n" << "A dark shadow appears in front of you.\n" << "A mysterious voice asks:\n";
                    std::cout << "\"Why have you come here?\"\n";
                    int speak;
                    std::cout << "Your Choices:";
                    std::cout << "1. Tell the truth\n";
                    std::cout << "2. Run away\n";
                    std::cin >> speak;

                    switch (speak)
                    {
                    case 1:
                        std::cout << "You take a deep breath.\n" << "You say:\n" << "\"I was lost in the forest. I only came here looking for shelter.\"\n" << "The shadow becomes silent.\n" << "Then it says:\n" << "\"You are not here for greed.\"\n" << "The shadow slowly disappears.\n";
                        std::cout << "A hidden staircase appears beneath the floor.\n" << "You realize you have discovered the entrance to the mansion's underground chamber.\n";
                        int final;
                        std::cout << "Your Choices:";
                        std::cout << "1. Go downstairs\n";
                        std::cout << "2. Leave the mansion\n";
                        std::cin >> final;

                        switch (final)
                        {
                        case 1:
                            std::cout << "\n Final Scene — The Treasure\n";
                            std::cout << "You slowly descend the hidden staircase.\n" << "The stairs seem endless.\n" << "Finally, you reach the bottom.\n" << "A gigantic underground chamber appears before you.\n" << "In the center is an ancient treasure chest.\n" << "You walk toward it.\n" << "You open the chest.";
                            std::cout << "Inside you discover:\n";
                            std::cout << "Gold coins\n";
                            std::cout << "Diamonds\n";
                            std::cout << "An ancient map\n";
                            std::cout << "A mysterious silver key\n\n";
                            std::cout << "You finally understand the secret of Blackwood Mansion.\n" << "The mansion wasn't abandoned.\n" << "It was built to protect the treasure.\n" << "The guardian had been waiting for someone brave enough to discover the truth.\n";
                            std::cout << "And you solved the mystery.\n";
                            std::cout <<"\n========================================\n";
                            std::cout << "          MYSTERY SOLVED!            \n";
                            std::cout << "  You survived Blackwood Mansion\n";
                            std::cout << "and discovered its hidden treasure.\n";
                            std::cout << "      CONGRATULATIONS, DETECTIVE!\n";
                            std::cout << "           THE END\n";
                            std::cout << "========================================\n";

                            break;
                        case 2:
                            std::cout << "You Leave The mansion\n";
                            break;
                        default:
                            break;
                        }
                        break;
                    case 2:
                        std::cout << "You turn around and run toward the door.\n" << "BOOM!\n" << "The door slams shut.\n" << "The room becomes completely dark.\n" << "The guardian whispers:\n";
                        std::cout << "\"You should never have entered.\"\n";
                        std::cout <<"\n========================================\n";
                        std::cout << "GAME OVER\n";
                        std::cout << "========================================\n";
                        break;
                    default:
                        break;
                    }
                    break;
                case 2:
                    std::cout << "You continue reading the letter.\n";
                    std::cout << "The final sentence says:\n" << "\"Only the brave may discover what lies beneath.\"\n";
                    std::cout << "You realize the hidden door is probably the entrance to the treasure.\n";
                    break;
                default:
                    break;
                }
            
            }
               
        case 2:
            std::cout << "You close the secret passage.\n";
            std::cout << "You decide the mansion is too dangerous.\n";
            std::cout << "You leave the mansion.\n";
            std::cout << "ENDING - ESCAPE\n";
            break;
        }
        break;
    

    case 2:
        std::cout << "You continue walking through the forest.\n" << "Suddenly, you notice a small abandoned cabin between the trees.\n";
        std::cout << "There is a light coming from inside.\n";
        
        int walk_forest;
        std::cout << "1. Enter the cabin\n";
        std::cout << "2. Ignore it and continue walking\n";
        std::cout << "Enter Your Choice: ";
        std::cin >> walk_forest;
        switch (walk_forest)
        {
        case 1:
            std::cout << "The room is empty.\n" << "On the table you find an old diary.\n";
            std::cout << "The final page says: \n";
            std::cout << "\"The treasure is hidden beneath the mansion.\"\n" << "\"But beware... the guardian still watches.\"\n";
            std::cout << "Suddenly, you hear something outside.\n";
            std::cout << "SCRATCH... SCRATCH...\n";
            
            
            int cabin;
            std::cout << "1. Look outside\n";
            std::cout << "2. Hide inside the cabin\n";
            std::cin >> cabin;

            switch (cabin)
            {
            case 1:
                std::cout << "You slowly open the cabin door.\n" << "There is nobody there.\n" << "But you notice something strange.\n" << "There are footprints in the mud.\n" << "The footprints lead toward the mansion.\n";
                int pathh;
                std::cout << "Your Choice:";
                std::cout << "1. Follow the footprints\n";
                std::cout << "2. Stay in the cabin\n";
                std::cin >> pathh;
                switch (pathh)
                {
                case 1:
                    std::cout << "You follow the footprints through the forest.\n" << "After several minutes, you arrive at Blackwood Mansion.\n" << "You realize the diary was telling the truth.\n" << "The mystery begins again.\n";
                    int mansion_again;
                    std::cout << "\n1. Enter the mansion\n";
                    std::cout << "2. Search around the mansion\n";
                    std::cout << "Enter Your Choice: ";
                    std::cin >> mansion_again;

                    if (mansion_again == 1)
                    {
                    
                    std::cout << "\nYou enter through a broken side door.\n";
                    std::cout << "The mystery continues.\n";
                    }
                    
                    else if (mansion_again == 2)
                    {
                    std::cout << "\nYou walk around the mansion.\n";
                    std::cout << "Behind the building, you discover strange footprints leading toward the basement.\n";
                    std::cout << "But the storm becomes stronger.\n";
                    std::cout << "You decide to return home.\n";
                    std::cout << "\nENDING - THE LOST DETECTIVE\n";
                    std::cout << "You survive the night, but the secret of Blackwood Mansion remains hidden.\n";
                
                    }
                    break;
                case 2:
                    std::cout << "You decide to stay inside.\n" << "The storm continues throughout the night.\n" << "You never discover the secret of Blackwood Mansion.\n";
                    std::cout << "\nENDING — THE MYSTERY REMAINS\n";
                    break;
                
                default:
                    break;
                }
                break;
            case 2:
                std::cout << "You hide behind an old table.\n" << "The scratching continues.\n" << "SCRATCH... SCRATCH...\n" << "Then suddenly...\n" << "Silence.\n" << "You wait for several minutes.\n" << "Nothing happens.\n" << "When you finally look outside, there is nobody there.\n" << "You decide that it is safer to stay away from the mansion.\n";
                std::cout << "\nENDING — SAFE ESCAPE\n";
                std::cout << "You survive the night but never discover the mystery.\n";
                break;
            default:
                break;
            }
            break;
        case 2:
            std::cout << "You continue walking.\n" << "After a few minutes, you realize you've reached the same mansion from another direction.\n";
            std::cout << "You have no choice but to investigate.\n";
            int path;
            std::cout << "1. Enter the mansion\n";
            std::cout << "2. Search around the mansion\n";
            std::cout << "Enter Your Choice: ";
            std::cin >> path;

            switch (path)
            {
            case 1:
                std::cout << "\nYou enter through a broken side door.\n";
                std::cout << "The mansion is dark and silent.\n";
                std::cout << "You hear a strange sound coming from upstairs.\n";

                int mansion_again;
                std::cout << "\n1. Go Upstairs\n";
                std::cout << "2. Explore the Living Room\n";
                std::cout << "Enter Your Choice: ";
                std::cin >> mansion_again;

                if (mansion_again == 1)
                {
                std::cout << "\nYou climb the old staircase.\n";
                std::cout << "Every step makes a loud CREAK.\n";
                std::cout << "At the end of the hallway, you find a locked bedroom.\n";
                }
                else if (mansion_again == 2)
                {
                std::cout << "\nYou enter the living room.\n";
                std::cout << "There is an old fireplace and a large bookshelf.\n";
                std::cout << "You notice a hidden button behind a book.\n";
                std::cout << "CLICK!\n";
                std::cout << "A secret passage opens behind the bookshelf.\n";
                }
                break;
            case 2:
                std::cout << "You walk around the mansion.\n" << "Behind the building, you discover strange footprints leading toward the basement.\n" << "But the storm becomes stronger.\n";
                std::cout << "You decide to return home.\n";
                std::cout << "\nENDING — THE LOST DETECTIVE\n";
                std::cout << "You survive the night, but the secret of Blackwood Mansion remains hidden.\n";
                break;
            default:
                break;
            }
        default:
            break;
        }
    
    default:
        break;
    }
}