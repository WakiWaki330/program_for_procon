#ifndef _SAMPLE_H_
#define _SAMPLE_H_

class CSample{
 public:
  void set(int num);
  int get();

 private:
  int m_num;
};

#endif //_SAMPLE_H_

void CSample::set(int num){
  m_num=num;
}

int CSample::get(){
  return m_num;
}
