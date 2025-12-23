#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* Next;
};

typedef Node* node;

node makeNode(int x){
    node newNode = new Node();
    newNode -> data = x;
    newNode -> Next = NULL;
    return newNode;
}

// them phan tu vao dau danh sach

void insertFirst(node &head, int x){
    node newNode = makeNode(x);
    newNode -> Next = head;
    head = newNode;
}

// them vao cuoi danh sach

void insertLast(node &head, int x){
    node newNode = makeNode(x);
    if (head == NULL){
        head = newNode;
        return;
    }
    node temp = head;
    while (temp -> Next != NULL){
        temp = temp -> Next;
    }
    temp -> Next = newNode;
}

// dem so luong phan tu trong danh sach
int size (node head){
    int count = 0;
    while (head != NULL){
        count++;
        head = head -> Next;
    }
    return count;
}

// xoa phan tu

void DeletePosition(node &head, int position){
    if (head == NULL || position < 0 || position > size(head)){
        cout << "Vi tri khong hop le" << endl;
        return;
    }
    node temp = head;
    
    if (position == 0){
        head = head ->Next;
        delete temp;
        return;
    }
    for (int i = 0; i < position - 1; i++){
        temp = temp -> Next;
    }
    node del = temp -> Next;
    temp -> Next = del -> Next;
    delete temp;
    return;
}

// tim kiem phan tu

int searchElement(node head, int x){
    int index = 0;
    while (head != NULL){
        if (head->data == x){ 
            cout << "vi tri cua phan tu la: " << index << endl;
            return index;
        }
        head = head->Next;
        index++;
    }
    cout << "Khong tim thay phan tu" << endl;
    return -1;
}

// hien thi danh sach
void printlist(node head){
    while (head != NULL){
        cout << head -> data <<" ";
        head = head -> Next;
    }
}
int main(){
    node head = NULL;
    insertFirst(head, 1);
    insertLast(head, 2);
    insertLast(head, 3);
    searchElement(head, 1);
    printlist(head);
    return 0;
}