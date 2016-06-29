
#import <Instagram/TTransport.h>

@protocol TTransport;
@class NSMutableData, NSString;

@interface TFramedTransport : NSObject <TTransport> {

	id<TTransport> mTransport;
	NSMutableData* writeBuffer;
	NSMutableData* readBuffer;
	unsigned readOffset;
	unsigned char dummy_header[4];

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(void)readFrame;
-(void)dealloc;
-(void)flush;
-(id)initWithTransport:(id)arg1 ;
@end

