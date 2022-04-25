**/kth smallest element (heap fist program)/**  
priority_queue<int> max_heap;
       for(int i=0;i<size;i++)
       {
           max_heap.push(arr[i]);
       }
       for(int i=k;i<=r;i++)
       {
           if(max_heap.size()>k)
           {
               max_heap.pop();
               
           }
       }
       return q.top();



**/second solution /**
 priority_queue<int> maxh;
       int n = r-l+1;
       for(int i =0; i <k; i++){
           maxh.push(arr[i]);
       }
       for( int i =k; i <n; i++){
           if( arr[i] < maxh.top()){
               maxh.pop();
               maxh.push(arr[i]);
           }
       }
       return maxh.top();
