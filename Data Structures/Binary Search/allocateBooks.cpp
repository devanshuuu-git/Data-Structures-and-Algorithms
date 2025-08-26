#include<bits/stdc++.h>
using namespace std;

bool canAllocate(vector<int> & books, int mid, int students){
    int cntStudent = 1;
    int pages = 0;
    int n = books.size();
    for(int i=0;i<n;i++){
        pages = pages + books[i];
        if(pages > mid){
            cntStudent++;
            pages = books[i];
        }
        if(cntStudent>students){
            return false;
        }
    }
    return true;
}

int allocateBook(vector<int> &books, int students){
    if(students>books.size()){
        return -1;
    }
    
    int low = *max_element(books.begin(),books.end());
    int high = accumulate(books.begin(), books.end(), 0);
    int ans = -1;
    while(low<=high){
        int mid = low + ((high-low)/2);
        bool possible = canAllocate(books, mid, students);
        
        if(possible == true){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter number of Books: ";
    cin>>n;

    cout<<"Enter number of the Pages: ";
    vector<int> books;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        books.push_back(x);
    }

    int students;
    cout<<"Enter number of Students: ";
    cin>>students;

    cout << "Minimum possible maximum pages: " << allocateBook(books, students);

}