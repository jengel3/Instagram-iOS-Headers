
#import <Instagram/TTransport.h>

@class NSInputStream, NSOutputStream, NSString;

@interface TNSStreamTransport : NSObject <TTransport> {

	NSInputStream* mInput;
	NSOutputStream* mOutput;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(int)readAll:(char*)arg1 offset:(int)arg2 length:(int)arg3 ;
-(void)write:(const char*)arg1 offset:(unsigned)arg2 length:(unsigned)arg3 ;
-(id)initWithInputStream:(id)arg1 outputStream:(id)arg2 ;
-(void)dealloc;
-(void)flush;
-(id)initWithInputStream:(id)arg1 ;
-(id)initWithOutputStream:(id)arg1 ;
@end

