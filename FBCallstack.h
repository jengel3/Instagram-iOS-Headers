

@interface FBCallstack : NSObject {

	int _size;
	unsigned _threadID;
	void* _callstack;
	unsigned long long _timestamp;

}

@property (nonatomic,readonly) int size;                                  //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned threadID;                         //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* callstack;                           //@synthesize callstack=_callstack - In the implementation block
-(id)initWithSize:(int)arg1 callstack:(void*)arg2 threadID:(unsigned)arg3 timestamp:(unsigned long long)arg4 ;
-(void*)callstack;
-(int)size;
-(void)dealloc;
-(unsigned long long)timestamp;
-(unsigned)threadID;
@end

