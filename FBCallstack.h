

@interface FBCallstack : NSObject {

	int _size;
	void* _callstack;

}

@property (nonatomic,readonly) int size;                     //@synthesize size=_size - In the implementation block
@property (nonatomic,readonly) void* callstack;              //@synthesize callstack=_callstack - In the implementation block
-(id)initWithSize:(int)arg1 callstack:(void*)arg2 ;
-(void*)callstack;
-(int)size;
-(void)dealloc;
@end

