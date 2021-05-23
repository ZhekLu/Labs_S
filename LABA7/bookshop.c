#include "bookshop.h"
#include "answer.h" //for menu; 
#include <stdlib.h>

int main()
{
    
}

void MainMenu(Shop* sh)
{   
    while(1)
    {
        printf("\n\tMAIN MENU"
        "\n1)Book list for sale."
        "\n2)Deals history."
        "\n3)Exit."); 
        switch (getAnswer(1, 3))
        {
        case 1:
            GoodsMenu(sh); 
            break;
        case 2:
            DealsMenu(sh); 
            break;
        case 3:
            return;
        }
    }
}

void BookMenu(Shop* sh)
{
    while(1)
    {
        printf("\n\tMAIN MENU->BOOKS"
        "\n1)See all books."
        "\n2)Customize search."
        "\n3)Checkout."
        "\n4)Back to main menu.");
        switch (getAnswer(1, 3))
        {
        case 1:
            BookCollectionShowMenu(sh); 
            break;
        
        case 2:
            BookCollectionSearchMenu(sh); 
            break;

        case 3:
            CheckOutDeal(sh); 
            break; 
        case 4:
            return; 
        }
    }
}
void CheckOutDeal(Shop* sh)
{
    if(!sh->currDeal)
        return;
    Deal* temp = sh->deals;
    if(temp)
    {
            while(temp->ptrNext)
                temp = temp->ptrNext;
        // temp->ptrNext = (Deal*)malloc(sizeof(Deal));
        temp->ptrNext = sh->currDeal;
        temp->ptrNext->ptrPrev = temp;
        // temp->booksQuantity = sh->currDeal->booksQuantity;
        // temp->buyedBooks = sh->currDeal->buyedBooks;
        sh->currDeal = NULL;

        sh->buyedBooksQuantity += temp->booksQuantity;
        sh->dealsQuantity++;
    }
    else  
    {
        sh->deals = sh->currDeal;
        sh->currDeal = NULL;
    }
    return; 
    /*revenue*/
}
void DealsMenu(Shop* sh)
{
    while(1)
    {
        printf("\n\tMAIN MENU->DEALS"
        "\n1)See all deals from history."
        "\n2)Customize search."
        "\n3)Back to main menu.");
        switch (getAnswer(1, 3))
        {
        case 1:
            // DealsHistoryShowMenu(); 
            break;
        
        case 2:
            // DealsHistorySearchMenu(); 
            break;

        case 3:
            return; 
        }
    }
}

void ShowBook(const Book* bk)
{
    printf("\nName: %s"
    "\nAuthor: %s"
    "\nAvailable quantity: %d"
    "\nPrise: %d$", 
    bk->name, bk->author, bk->quantity, bk->salesPrice);
}

void BookCollectionShowMenu(Shop* sh)
{
    int counter = 0, quantity = sh->bookTypeQuantity;
    if(!quantity)
    {
        printf("\nThere's no any books.");
        return;
    }
    while(1)
    {
        system("cls");
        printf("\n\tMAIN MENU->BOOKS->ALL BOOKS");
        if(counter < quantity)
            ShowBook((sh->books[counter])); 
        printf("\n\n(1)Previous book\t(2)Add to cart\t(3)return to BOOKS menu\t(4)Next book");
        switch (getAnswer(1, 3))
        {
        case 1:
            if(!counter)
                counter = quantity - 1;
            else 
                counter--; 
            break;
        case 2:
            int tempqua = 0;
            printf("How many book u want? ");
            scanf("%d", tempqua); 
            if(!sh->currDeal)
            {
                sh->currDeal = (Deal*)malloc(sizeof(Deal));
                *(sh->currDeal) = (Deal){0, NULL, NULL, NULL};
                sh->currDeal->buyedBooks = (int*)malloc(sizeof(int) * quantity); 
                int i = 0;
                for(; i < quantity; i++)
                {
                    sh->currDeal->buyedBooks[i] = 0; 
                }
            }
            sh->currDeal->booksQuantity += tempqua;
            sh->currDeal->buyedBooks[counter] += tempqua; 
            break;

        case 3:
            return;
        case 4:
            if(counter == quantity - 1)
                counter = 0;
            else  
                counter++; 
            break;
        }
    }
}

void BookCollectionSearchMenu(Shop* sh)
{
    while(1)
    {
        system("cls");
        printf("\n\tMAIN MENU->BOOKS->SEARCH");
        printf("\nEnter the first letter of book name: ");
        char firstsymb;
        scanf("%c", firstsymb);
        int quantity = sh->booksQuantity; 
        int i = 0;
        for(; i < quantity; i++)
        {
            if(sh->books[i]->name[0] == firstsymb)
            {
                printf("\n%s", sh->books[i]->name);
            }
        }
        printf("\n1)Retun to BOOKS.\n2)Research.");
        switch (getAnswer(1, 2))
        {
        case 1:
            return;
        
        case 2:
            break;
        }
    }
    
}

void DealsHistoryShowMenu(Shop* sh)
{
    if(!sh->deals)
        return; 
}

void DealsHistorySearchMenu()
{

}