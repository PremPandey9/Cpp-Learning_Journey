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
                    break;
                case 2:
                    std::cout << "You try the door.\n" << "CLICK...\n" << "But it doesn't open.\n" << "The bedroom is locked.\n" << "You remember the golden key from the painting.\n";
                    std::cout << "You decide: \n";
                    std::cout << "1. Search the mansion for the golden key\n";
                    std::cout << "2. Leave the hallway";
                    std::cout << "Enter Your Choice: ";
                    
                default:
                    break;
                }
                break;
            
            
            case 2:
                std::cout << "You try the door." << "CLICK..." << "But it doesn't open." << "The bedroom is locked.";
                std::cout << "You remember the golden key from the painting.";
                std::cout << "Your Choices: ";
                std::cout << "1. Search the mansion for the golden key\n";
                std::cout << "2. Leave the hallway";
                std::cout << "Enter Your Choice: ";
                break;
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
                    std::cout << "Choose The Correct Figure: ";
                    std::cin >> order;

                    if (order == 1)
                    {
                        std::cout << "The symbols glow." << "The chest opens.\n" << "Inside is a golden key.\n";
                        
                        haskey = true;
                        
                            break;
                    }
                    else{
                        std::cout << "Incorrect!, The symbols remain dark.";
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
                    std::cout << "Your Choices:";
                    std::cout << "1. Open the hidden door";
                    std::cout << "2. Read the rest of the letter";
                    std::cin >> hidn;

                    switch (hidn)
                    {
                    case 1:
                        
                        break;
                    
                    default:
                        break;
                    }

                }
            }
            break;
        default:
            break;
        }
        break;

    case 2:
        std::cout << "You continue walking through the forest.\n" << "Suddenly, you notice a small abandoned cabin between the trees.\n";
        std::cout << "There is a light coming from inside.\n";
        
        int walk_forest;
        std::cout << "1. Enter the cabin\n";
        std::cout << "2. Ignore it and continue walking";
        std::cout << "Enter Your Choice: ";
        std::cin >> walk_forest;
        switch (walk_forest)
        {
        case 1:
            std::cout << "The room is empty.\n" << "On the table you find an old diary.\n";
            std::cout << "The final page says: \n";
            std::cout << "The treasure is hidden beneath the mansion.\n" << "But beware... the guardian still watches.\n";
            std::cout << "Suddenly, you hear something outside.\n";
            std::cout << "SCRATCH... SCRATCH...\n";
            
            
            int cabin;
            std::cout << "1. Look outside";
            std::cout << "2. Hide inside the cabin";
            break;
        case 2:
            std::cout << "You continue walking.\n" << "After a few minutes, you realize you've reached the same mansion from another direction.\n";
            std::cout << "You have no choice but to investigate.\n";
            std::cout << "1. Enter the mansion";
            std::cout << "2. Search around the mansion";
            break;
        default:
            break;
        }

        break;
    
    default:
        break;
    }

}