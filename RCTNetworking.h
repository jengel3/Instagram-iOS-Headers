
#import <Instagram/RCTEventEmitter.h>

@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSArray, NSObject;

@interface RCTNetworking : RCTEventEmitter {

	NSMutableDictionary* _tasksByRequestID;
	NSArray* _handlers;
	NSObject*<OS_dispatch_queue> _methodQueue;

}
+(id)moduleName;
+(id)decodeTextData:(id)arg1 fromResponse:(id)arg2 ;
+(id)__rct_export__4900;
+(id)__rct_export__5061;
+(void)load;
-(id)methodQueue;
-(/*^block*/id)processDataForHTTPQuery:(id)arg1 callback:(/*^block*/id)arg2 ;
-(id)stripNullsInRequestHeaders:(id)arg1 ;
-(id)handlerForRequest:(id)arg1 ;
-(id)networkTaskWithRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)sendData:(id)arg1 responseType:(id)arg2 forTask:(id)arg3 ;
-(void)sendRequest:(id)arg1 responseType:(id)arg2 incrementalUpdates:(char)arg3 responseSender:(/*^block*/id)arg4 ;
-(/*^block*/id)buildRequest:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(id)supportedEvents;
-(void)sendRequest:(id)arg1 responseSender:(/*^block*/id)arg2 ;
-(void)abortRequest:(id)arg1 ;
-(char)canHandleRequest:(id)arg1 ;
@end

