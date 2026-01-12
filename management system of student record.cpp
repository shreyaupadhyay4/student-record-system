#include<iostream>
using namespace std;
string arr1[62],arr2[62],arr3[62],arr4[62],arr5[62];
int total=0;
void enter()
{
  int ch=0;
  cout<<"Enter number student to add:"<<endl;
  cin>>ch;
  if(total==0)
  {
    total=ch+total;
    for (int i=0;i<ch;i++)
    {
      cout<<"\nEnter the data of students"<<i+1<<endl<<endl;
      cout<<"Enter name " ;
      cin>>arr1[i];
      cout << "Enter Roll no ";
      cin >> arr2[i];
      cout << "Enter course ";
      cin >> arr3[i];
      cout << "Enter CGPA ";
      cin >> arr4[i];
      cout << "Enter contact ";
      cin >> arr5[i];
    }
  }

  else

  {
    for (int i = total; i < ch+total; i++)
    {
      cout << "\nEnter the Data of student " << i + 1 << endl
           << endl;
      cout << "Enter name ";
      cin >> arr1[i];
      cout << "Enter Roll no ";
      cin >> arr2[i];
      cout << "Enter course ";
      cin >> arr3[i];
      cout << "Enter CGPA ";
      cin >> arr4[i];
      cout << "Enter contact ";
      cin >> arr5[i];
    }

    total=ch+total;
  }
}

void show()

{

  if(total==0)

  {

    cout<<"No data is entered"<<endl;
  }
  else
  {
    for (int i = 0; i < total; i++)

    {

      cout << "\nData of Student " << i + 1 << endl
           << endl;
      cout << "Name " << arr1[i] << endl;
      cout << "Roll no " << arr2[i] << endl;
      cout << "Course " << arr3[i] << endl;
      cout << "CGPA " << arr4[i] << endl;
      cout << "Contact " << arr5[i] << endl;
    }
  }
}

void search()

{

  if (total == 0)

  {

    cout<<"No data is entered"<<endl;
  }

  else
  {

    string rollno;
    cout<<"Enter the roll no of student which you have to search"<<endl;
    cin>>rollno;
    for (int i = 0; i < total; i++)

    {

      if (rollno == arr2[i])

      {

        cout << "Name " << arr1[i] << endl;
        cout << "Roll no " << arr2[i] << endl;
        cout << "Course " << arr3[i] << endl;
        cout << "CGPA " << arr4[i] << endl;
        cout << "Contact " << arr5[i] << endl;
      }
    }
  }
}

void update()

{

  if(total==0)
  {
    cout << "No data is entered" << endl;
  }

  else
  {

    string rollno;
    cout << "Enter the roll no of student which you want to update" << endl;
    cin >> rollno;
    for (int i = 0; i < total; i++)

    {

      if (rollno == arr2[i])

      {

        cout<<"\nPrevious Data "<<endl<<endl;
        cout <<"Data of Student" << i+1 << endl;
        cout << "Name " << arr1[i] << endl;
        cout << "Roll no " << arr2[i] << endl;
        cout << "Course " << arr3[i] << endl;
        cout << "CGPA " << arr4[i] << endl;
        cout << "Contact " << arr5[i] << endl;
        cout << "\n Enter new data" << endl<<endl;
        cout<<"Enter name ";
        cin>>arr1[i];
        cout << "Enter Roll no  ";
        cin >> arr2[i];
        cout << "Enter course ";
        cin >> arr3[i];
        cout << "Enter CGPA ";
        cin >> arr4[i];
        cout << "Enter contact ";
        cin >> arr5[i];
      }
    }
  }
}

void deleterecord()

{

  if (total == 0)

  {

    cout << "No data is entered" << endl;
  }

  else
  {
    int a;
    cout<<"Press 1 to delete all record"<<endl;
    cout << "Press 2 to delete specific record" << endl;
    cin>>a;
    if(a==1)
    {
      total=0;
      cout<<"All record is deleted"<<endl;
    }
    else if(a==2)
    {
      string rollno;
      cout << "Enter the roll no of student which you want to delete" << endl;
      cin >> rollno;

      for (int i = 0; i < total-1; i++)

      {

        if (rollno == arr2[i])

        {

          for (int j=1;j<total;j++)

          {

            arr1[j]=arr1[j+1];
            arr2[j] = arr2[j + 1];
            arr3[j] = arr3[j + 1];
            arr4[j] = arr4[j + 1];
            arr5[j] = arr5[j + 1];
          }
          total--;
          cout << "your specified record is deleted "<< endl;
        }
      }
    }

    else

    {

      cout<<"Enter valid input"<<endl;
    }
  }
}

main()

{
  int value;
  while(true)
  {
    cout << "\nPress 1 to enter data"<<endl;
    cout << "Press 2 to show data" << endl;
    cout << "Press 3 to search data" << endl;
    cout << "Press 4 to update data" << endl;
    cout << "Press 5 to delete data" << endl;
    cout << "Press 6 to exit" << endl;
    cin>>value;
    switch(value)
    {
    case 1:
      enter();
      break;
    case 2:
      show();
      break;
    case 3:
      search();
      break;
    case 4:
      update();
      break;
    case 5:
      deleterecord();
      break;
    case 6:
      exit(0);
      break;
    default:
      cout<<"Enter valid input"<<endl;
      break;
    }
  }
}
