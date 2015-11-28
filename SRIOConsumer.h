

@interface SRIOConsumer : NSObject {

	/*^block*/id _scanner;
	/*^block*/id _handler;
	unsigned long _bytesNeeded;
	char _readToCurrentFrame;
	char _unmaskBytes;

}

@property (nonatomic,copy,readonly) id consumer;                     //@synthesize scanner=_scanner - In the implementation block
@property (nonatomic,copy,readonly) id handler;                      //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) unsigned long bytesNeeded;              //@synthesize bytesNeeded=_bytesNeeded - In the implementation block
@property (nonatomic,readonly) char readToCurrentFrame;              //@synthesize readToCurrentFrame=_readToCurrentFrame - In the implementation block
@property (nonatomic,readonly) char unmaskBytes;                     //@synthesize unmaskBytes=_unmaskBytes - In the implementation block
-(unsigned long)bytesNeeded;
-(char)readToCurrentFrame;
-(char)unmaskBytes;
-(void)setBytesNeeded:(unsigned long)arg1 ;
-(void)setupWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(char)arg4 unmaskBytes:(char)arg5 ;
-(id)handler;
-(id)consumer;
@end

