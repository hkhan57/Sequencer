#ifndef __SEQUENCER_H_INCLUDED__
#define __SEQUENCER_H_INCLUDED__

#include <memory>

template <class SourceType, DestType>
class PartitionedSequencer
{
public:
   
   enqueue(shared_ptr<SourceType> elem, int partition = 0);
   shared_ptr<DestType> dequeue(int partition = 0);
   
   void threadpool_size(int nThreads);
   int threadpool_size() const;
   

private:
};

#endif // __SEQUENCER_H_INCLUDED__
