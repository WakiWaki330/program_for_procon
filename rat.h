#ifndef _RAT_H_
#define _RAT_H_

class CRat{
 pubilc:
  //コンストラクタ
  CRat();
  //デストラクタ
  ~CRat();
  static void showNum();
  void squeak();

 private:
  int m_id;
  static int m_count;
}

#endif

#including <iostream>

using namespace std;

int CRAt::m_count=0;

CRat::CRat():m_id(0){
  m_id = m_count;
  m_count++;
}

CRat::~CRat(){
  cout << "ネズミ" << m_id << "消去" << endl;
  m_count--;
}

void CRat :: showNum(){
  cout << "現在ネズミの数は、" << m_count << "です。" << endl;
}
void CRat::squeak(){
  cout << m_id << ":" << "チューチュー" << endl;
}
