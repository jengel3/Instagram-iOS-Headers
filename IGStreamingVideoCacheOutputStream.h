
#import <Instagram/Instagram-Structs.h>
#import <CoreFoundation/NSOutputStream.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray;

@interface IGStreamingVideoCacheOutputStream : NSOutputStream {

	NSObject*<OS_dispatch_queue> _queue;
	char _open;
	NSMutableArray* _observers;

}
-(id)propertyForKey:(id)arg1 ;
-(char)_setCFClientFlags:(unsigned long)arg1 callback:(/*function pointer*/void*)arg2 context:(SCD_Struct_IG23*)arg3 ;
-(void)_scheduleInCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)_unscheduleFromCFRunLoop:(CFRunLoopRef)arg1 forMode:(CFStringRef)arg2 ;
-(void)removeFromRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)addObserver:(id)arg1 ;
-(id)initWithQueue:(id)arg1 ;
-(void)close;
-(void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2 ;
-(void)open;
-(char)hasSpaceAvailable;
-(int)write:(const char*)arg1 maxLength:(unsigned)arg2 ;
@end

