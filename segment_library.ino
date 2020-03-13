#include <Segment.h>



Segment segment(2,3,4,5,6,8,9);

void setup(){
  segment.PinSetup();
}

void loop() {
segment.Sequence1();
segment.Sequence2();
segment.Sequence3();
segment.Sequence4();
segment.Sequence5();
segment.Sequence6();
segment.Sequence7();
segment.Sequence8();
segment.Sequence9();
segment.Sequence10();
  
}
