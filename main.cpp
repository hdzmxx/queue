#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <iomanip>

using namespace std;

struct node
{
    char np[4],nama[100],posisi[20];
    struct node *next;
}*front=NULL,*rear,*temp;

void Tambah()
{
    temp=new node;
    cout<<"\tInput data pemain sepak bola"<<endl;
    cout<<"\t----------------------------"<<endl;
    cout<<"No Punggung : ";fflush(stdin);gets(temp->np);
    cout<<"Nama pemain : ";gets(temp->nama);
    cout<<"Posisi      : ";gets(temp->posisi);
    temp->next=NULL;
    if(front==NULL)
        {front=rear=temp;}
    else
    {rear->next=temp;
    rear=temp;}

    system("cls");
}

void Kurang()
{
    if(front==NULL){
        cout<<"Antrian kosong\n\n";
        system("pause");
        system("cls");
    }
    else
    {
        temp=front;
        front=front->next;
        delete(temp);
        cout<<"Dequeue Berhasil"<<endl<<endl;
        system("pause");
        system("cls");
    }
}

void PrintAntrian()
{
    if(front==NULL)
    {
        cout<<"Antrian Kosong\n\n";
        system("pause");
        system("cls");
    }
    else
    {
        temp=front;
            cout<<"\t   DATA DALAM ANTRIAN"<<endl;
            cout<<"-----------------------------------------"<<endl;
            cout<<setiosflags(ios::left)<<setw(6)<<"NO";
            cout<<setiosflags(ios::left)<<setw(24)<<"Nama pemain";
            cout<<setiosflags(ios::left)<<setw(20)<<"Posisi";
            cout<<setiosflags(ios::left)<<setw(10)<<endl;
            cout<<"-----------------------------------------"<<endl;
        while(temp!=NULL)
        {
    cout<<setiosflags(ios::left)<<setw(6)<<temp->np;
    cout<<setiosflags(ios::left)<<setw(24)<<temp->nama;
    cout<<setiosflags(ios::left)<<setw(20)<<temp->posisi;
    cout<<setiosflags(ios::left)<<setw(10)<<endl;

   temp=temp->next;
        }
        cout<<endl;
        system("pause");
        system("cls");
    }
}

int main()
{
    int pilih;
    do
    {
        cout<<"\t\t-------------------------"<<endl;
        cout<<"\t\t    QUEUE LINKED LIST    "<<endl;
        cout<<"\t\t-------------------------"<<endl<<endl;
        cout<<"1. ENQUEUE"<<endl;
        cout<<"2. DEQUEUE"<<endl;
        cout<<"3. PRINT"<<endl;
        cout<<"4. EXIT"<<endl<<endl;
        cout<<"PILIH MENU: ";
        cin>>pilih;
        cout<<endl;
        switch(pilih)
        {
            case 1:
                Tambah();
            break;
            case 2:
                Kurang();
            break;
            case 3:
                PrintAntrian();
            break;
            case 4:
                exit(0);
            break;
            default:
            cout<<"Pilihan Tidak ada"<<endl;
            system("pause");
            system("cls");
            break;
        }
    }while(pilih!=4);

    return 0;
}
