
#import <Instagram/TTransport.h>

@class NSMutableData, NSString;

@interface TMemoryBuffer : NSObject <TTransport> {

	NSMutableData* mBuffer;
	unsigned mOffset;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)getBuffer;
-(unsigned)getOffset;
-(void)dealloc;
-(id)init;
-(void)flush;
-(id)initWithData:(id)arg1 ;
@end

