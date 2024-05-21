#include <iostream>
#include <cassert>



class Matrix{
  private:
    int rows;
    int cols;
    int **data;
  public:
    Matrix(int r, int c){
      rows = r;
      cols = c;
      data = new int * [rows];
      if(data){
        for (int i=0; i<rows; i++){
          data[i] = new int [cols];
          assert(data[i]);
        }
      }
    }

    void set_matrix(){
      int tmp = 0;
      for (int i=0; i<rows; i++)
        for (int j=0; j<cols; j++)
          data[i][j] = tmp++;
    }


    int& operator()(int r, int c){
      assert(r >= 0 && r < rows && c >= 0 && c < cols);
      return data[r][c];
    }


    void print(){
      for (int i=0; i<rows; i++)
        for(int j=0; j<cols; j++){
          std::cout<<data[i][j]<<std::endl;
        }
    }
    ~Matrix(){
      for (int i=0; i<rows; i++){
        delete[] data[i];
      }
      delete[] data;
      std::cout<<"Matrix destructor is called"<<std::endl;
    }
};


int main(){

  //int **p;
  //int i,j;
  std::cout<<"Hello"<<std::endl;
  Matrix matrix = Matrix(3, 3);
  matrix.set_matrix();
  matrix.print();

}
