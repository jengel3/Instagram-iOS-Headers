

#import <Instagram/Instagram-Structs.h>
@interface IGStreamingVideoCacheOutputStreamObserver : NSObject {

	/*^block*/id _observerBlock;
	NSRange _runningRangeOfBytesToObserve;

}

@property (nonatomic,readonly) NSRange runningRangeOfBytesToObserve;              //@synthesize runningRangeOfBytesToObserve=_runningRangeOfBytesToObserve - In the implementation block
-(id)initWithRangeToObserve:(NSRange)arg1 observerBlock:(/*^block*/id)arg2 ;
-(NSRange)runningRangeOfBytesToObserve;
-(void)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end

