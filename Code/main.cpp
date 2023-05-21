#include "polygon.h"
#include "isotrapezoid.h"
#include "rectangle.h"
#include "rhombus.h"

#define NUM 10

int main() {
    Polygon * objects[NUM];
    int choice = 0, i;

    //init the array to nullptr
    for (i = 0; i < NUM; ++i) {
        objects[i] = nullptr;
    }
    i = 0;

    while (i < NUM ){
        cout << "select the operation: " << endl;
        cout << "1. Add Rectangle" << endl << "2. Add Rhombus" << endl
             << "3. Add Isotrapezoid" << endl << "4. Print Area & Perimeter" << endl << "5. Exit" <<endl;
        cout << "choice: "<< ends;
        scanf("%d", &choice);

        switch (choice) {
            case 1: {
                //generate a rectangle
                float width, lenght;
                Rectangle *ptr;
                cout << "insert the width and the lenght of the rectangle: " << endl;
                scanf("%f %f", &width, &lenght);
                ptr = new Rectangle();
                ptr->SetDim(width, lenght);
                objects[i] = ptr;
                i++;
                break;
            }
            case 2: {
                //generate a rhombus
                float diagH, diagV;
                Rhombus *ptr;
                cout << "insert the two diagonals of the rhombus: " << endl;
                scanf("%f %f", &diagH, &diagV);
                ptr = new Rhombus();
                ptr->SetDim(diagH, diagV);
                objects[i] = ptr;
                i++;
                break;
            }
            case 3: {
                //generate an isotrapezoid
                float TopSide, BottomSide, Height;
                isotrapezoid *ptr;
                cout << "insert the two bases and the height of the trapezoid: " << endl;
                scanf("%f %f %f", &BottomSide, &TopSide, &Height);
                ptr = new isotrapezoid(BottomSide, TopSide, Height);
                while (ptr->ErrorDim() == true){
                    cout << "insert again the bases value (Bottom > Top): " << ends;
                    scanf("%f %f %f", &BottomSide, &TopSide, &Height);
                    ptr = new isotrapezoid(BottomSide, TopSide, Height);
                }
                ptr->SetDim(BottomSide, TopSide, Height);
                objects[i] = ptr;
                i++;
                break;
            }
            case 4: {
                //draw shapes
                int j = 0;
                    while(objects[j] != nullptr && j < NUM) {
                        objects[j]->Draw();
                        j++;
                    }
                break;
            }
            case 5: {
                //exit
                int j = 0;
                    while(objects[j] != nullptr && j < NUM) {
                        delete objects[j];
                        j++;
                    }
                    cout << endl << "objects all deleted, returned to the menu" << endl << endl;
                break;
            }
            default: {
                    cout <<"input not recognized"<< ends;
                break;
            }
        }    
    }

    return 0;
}
