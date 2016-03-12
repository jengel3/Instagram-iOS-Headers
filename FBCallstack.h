

@interface FBCallstack : NSObject {

	int _size;
	unsigned _threadID;
	unsigned long _timestamp;
	void* _callstack;

}

@property (nonatomic,readonly) int size;                             //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) unsigned threadID;                    //@synthesize threadID=_threadID - In the implementation block
@property (nonatomic,readonly) unsigned long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) void* callstack;                      //@synthesize callstack=_callstack - In the implementation block
-(id)initWithSize:(int)arg1 callstack:(void*)arg2 threadID:(unsigned)arg3 timestamp:(unsigned long)arg4 ;
-(void*)callstack;
-(int)size;
-(void)dealloc;
-(unsigned long)timestamp;
-(unsigned)threadID;
@end

