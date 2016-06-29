
#import <Instagram/RCTEventEmitter.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, NSObject;

@interface RCTNetworking : RCTEventEmitter {

	NSMutableDictionary* _tasksByRequestID;
	NSArray* _handlers;
	NSObject*<OS_dispatch_queue> _methodQueue;

}
+(id)moduleName;
+(id)__rct_export__4490;
+(id)__rct_export__4631;
+(void)load;
-(id)methodQueue;
-(id)supportedEvents;
-(id)networkTaskWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(/*^block*/id)processDataForHTTPQuery:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)stripNullsInRequestHeaders:(id)arg1 ;
-(id)handlerForRequest:(id)arg1 ;
-(void)sendData:(id)arg1 forTask:(id)arg2 ;
-(void)sendRequest:(id)arg1 incrementalUpdates:(char)arg2 responseSender:(/*^block*/id)arg3 ;
-(/*^block*/id)buildRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendRequest:(id)arg1 responseSender:(/*^block*/id)arg2 ;
-(void)abortRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end

