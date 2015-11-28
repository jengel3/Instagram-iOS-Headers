

@interface GCDAsyncSocketPreBuffer : NSObject {

	char* preBuffer;
	unsigned long preBufferSize;
	char* readPointer;
	char* writePointer;

}
-(void)ensureCapacityForWrite:(unsigned long)arg1 ;
-(void)getReadBuffer:(char**)arg1 availableBytes:(unsigned*)arg2 ;
-(void)didRead:(unsigned long)arg1 ;
-(char*)writeBuffer;
-(void)getWriteBuffer:(char**)arg1 availableSpace:(unsigned*)arg2 ;
-(void)didWrite:(unsigned long)arg1 ;
-(unsigned long)availableBytes;
-(void)dealloc;
-(id)initWithCapacity:(unsigned long)arg1 ;
-(void)reset;
-(unsigned long)availableSpace;
-(char*)readBuffer;
@end

