#include "bookshop.h"
#include "shopmode.h"
#include "answer.h"
int main()
{
    NEWSHOP(sh);
    if(!AddBooks("books.txt", &sh))
    {
        printf("Smth comes wrong!");
        return 0;
    }
    int quantity = sh.bookTypeQuantity;
    int counter = 0; //for menu
    Deal* temp = NULL; //for menu
    int mode = 0;
    while(1)
    {
        if(mode == MainMenu)
        {
            printf("\n\tMAIN MENU"
            "\n1)Book list for sale."
            "\n2)Deals history."
            "\n3)Exit."); 
            switch (getAnswer(1, 3))
            {
            case 1:
                // BookMenu(&sh); 
                mode = BookMenu;
                break;
            case 2:
                // DealsMenu(&sh); 
                mode = DealsMenu;
                break;
            case 3:
                return 0;
            }
        }
        else if (mode == BookMenu)
        {
            printf("\n\tMAIN MENU->BOOKS"
            "\n1)See all books."
            "\n2)Customize search."
            "\n3)Checkout."
            "\n4)Back to main menu.");
            switch (getAnswer(1, 4))
            {
            case 1:
                // BookCollectionShowMenu(sh);
                mode = BookCollectionShowMenu;
                break;
            
            case 2:
                // BookCollectionSearchMenu(sh); 
                mode = BookCollectionSearchMenu;
                break;

            case 3:
                CheckOutDeal(&sh); 
                break; 
            case 4:
                mode = MainMenu; 
                break;
            }
        }
        else if (mode == DealsMenu)
        {
            printf("\n\tMAIN MENU->DEALS"
            "\n1)See all deals from history."
            "\n2)Customize search."
            "\n3)Back to main menu.");
            switch (getAnswer(1, 3))
            {
            case 1:
                // DealsHistoryShowMenu(); 
                mode = DealsHistoryShowMenu;
                break;
            
            case 2:
                // DealsHistorySearchMenu(); 
                mode = DealsHistorySearchMenu;
                break;

            case 3:
                mode = MainMenu;
                break; 
            }
        }
        else if (mode == BookCollectionShowMenu)
        {
            if(!quantity)
            {
                printf("\nThere's no any books.");
                mode = BookMenu;
            }
            else  
            {
                system("cls");
                printf("\n\tMAIN MENU->BOOKS->ALL BOOKS");
                if(counter < quantity)
                {
                    printf("\nName: %s"
                    "\nAuthor: %s"
                    "\nAvailable quantity: %d"
                    "\nPrise: %d$", 
                    sh.books[counter]->name, sh.books[counter]->author, 
                    sh.books[counter]->quantity, sh.books[counter]->salesPrice);
                }
                printf("\n\n(1)Previous book\t(2)Add to cart\t(3)return to BOOKS menu\t(4)Next book");
                switch (getAnswer(1, 4))
                {
                case 1:
                    if(!counter)
                        counter = quantity - 1;
                    else 
                        counter--; 
                    break;
                case 2: ;
                    int tempqua = 0;
                    printf("How many book u want? ");
                    scanf("%d", &tempqua); 
                    if(!sh.currDeal)
                    {
                        sh.currDeal = (Deal*)malloc(sizeof(Deal));
                        *(sh.currDeal) = (Deal){0, NULL, NULL, NULL};
                        sh.currDeal->buyedBooks = (int*)malloc(sizeof(int) * quantity); 
                        int i = 0;
                        for(; i < quantity; i++)
                        {
                            sh.currDeal->buyedBooks[i] = 0; 
                        }
                    }
                    sh.currDeal->booksQuantity += tempqua;
                    sh.currDeal->buyedBooks[counter] += tempqua; 
                    break;
                
                case 3:
                    mode = BookMenu;
                case 4:
                    if(counter == quantity - 1)
                        counter = 0;
                    else  
                        counter++; 
                    break;
                }
            }
        }
        else if (mode == BookCollectionSearchMenu)
        {
            system("cls");
            printf("\n\tMAIN MENU->BOOKS->SEARCH");
            printf("\nEnter the first letter of book name: ");
            char symbs[30], firstsymb, secsymb;
            if(/*(firstsymb = getchar()) == EOF*/scanf("%s", symbs) != 1)
            {
                while(getchar() != '\n'){}
                firstsymb = 'a';
            }
            // else  getchar();
            firstsymb = symbs[0];
            if(firstsymb >= 'A' && firstsymb < 'a')
                secsymb = firstsymb + 32;
            else 
                secsymb = firstsymb - 32; 
            printf("Book named started with %c: ", firstsymb);
            // int quantity = sh.booksQuantity; 
            int i = 0;
            for(; i < quantity; i++)
            {
                if(sh.books[i]->name[0] == firstsymb || sh.books[i]->name[0] == secsymb)
                {
                    printf("\n%s", sh.books[i]->name);
                }
            }
            printf("\n1)Retun to BOOKS.\t2)Research.");
            switch (getAnswer(1, 2))
            {
            case 1:
                mode = BookMenu;
            
            case 2:
                break;
            }
            
        }
        else if (mode == DealsHistoryShowMenu)
        {
            if(!sh.deals)
            {
                printf("\nThere's no any deals");
                mode = DealsMenu;
            }
            else
            {
                system("cls");
                printf("\n\tMAIN MENU->DEALS->ALL DEALS");
                if(!temp)
                    temp = sh.deals; 
                if(temp)
                {
                    printf("\nDeal.\nBooks quantity: %d\n Books:\n", temp->booksQuantity);
                    int i = 0;
                    for(; i < quantity; i++)
                        if(temp->buyedBooks[i])
                            printf("%s", sh.books[i]->name);
                    
                }
                printf("\n\n(1)Previous deal\t(2)return to DEALS menu\t(3)Next deal");
                switch (getAnswer(1, 3))
                {
                case 1:
                    if(!temp->ptrPrev)
                        while(temp->ptrNext)
                            temp = temp->ptrNext;
                    else
                        temp = temp->ptrPrev;
                    break;
                case 2:
                    mode = DealsMenu;
                case 3:
                    if(temp->ptrNext)
                        temp = temp->ptrNext;
                    else  
                        temp = sh.deals;
                }
            }
        }
        else if (mode == DealsHistorySearchMenu)
        {
            system("cls");
            printf("\n\tMAIN MENU->DEALS->SEARCH");
            printf("\nEnter the min qu of bought books: ");
            int firstsymb;
            if(scanf("%d", &firstsymb) != 1)
            {
                firstsymb = 1;
                while(getchar() != '\n'){}
            }
            else  
                getchar();
            printf("Deals with min book quantity ___%d____:", firstsymb);
            int quantity = sh.dealsQuantity; 
            int i = 0; 
            Deal* tempdlformenu = sh.deals;
            for(; i < quantity; i++)
            {
                if(tempdlformenu->booksQuantity == firstsymb)
                {
                    printf("\nDeal %d: %d", i + 1, tempdlformenu->booksQuantity);
                }
            }
            printf("\n1)Retun to DEALS.\t2)Research.");
            switch (getAnswer(1, 2))
            {
            case 1:
                mode = DealsMenu;
            
            case 2:
                break;
            }
        }
    }
    temp = NULL; 
    FreeShop(&sh);
}