
#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSInputStream.h>

@class NSArray, NSEnumerator, NSInputStream;

@interface IGSequenceInputStream : NSInputStream {

	NSArray* _inputStreams;
	NSEnumerator* _enumerator;
	NSInputStream* _currentStream;
	unsigned _streamStatus;

}
-(id)initWithInputStreams:(id)arg1 ;
-(char)getBuffer:(char**)arg1 length:(unsigned*)arg2 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_IG7*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)nextStream;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(unsigned)streamStatus;
-(char)hasBytesAvailable;
-(int)read:(char*)arg1 maxLength:(unsigned)arg2 ;
@end

