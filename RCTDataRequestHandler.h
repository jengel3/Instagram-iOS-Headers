
#import <Instagram/RCTURLRequestHandler.h>
#import <Instagram/RCTInvalidating.h>

@class NSOperationQueue, NSString, RCTBridge;

@interface RCTDataRequestHandler : NSObject <RCTURLRequestHandler, RCTInvalidating> {

	NSOperationQueue* _queue;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,__weak,readonly) RCTBridge * bridge; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> methodQueue; 
+(id)moduleName;
+(void)load;
-(id)sendRequest:(id)arg1 withDelegate:(id)arg2 ;
-(void)invalidate;
-(void)cancelRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end

