

@class NSMutableArray;

@interface SRIOConsumerPool : NSObject {

	unsigned _poolSize;
	NSMutableArray* _bufferedConsumers;

}
-(id)consumerWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long)arg3 readToCurrentFrame:(char)arg4 unmaskBytes:(char)arg5 ;
-(void)returnConsumer:(id)arg1 ;
-(id)initWithBufferCapacity:(unsigned)arg1 ;
-(id)init;
@end

