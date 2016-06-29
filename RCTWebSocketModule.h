
#import <Instagram/RCTEventEmitter.h>
#import <Instagram/RCTSRWebSocketDelegate.h>

@class NSMutableDictionary, NSString;

@interface RCTWebSocketModule : RCTEventEmitter <RCTSRWebSocketDelegate> {

	NSMutableDictionary* _sockets;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleName;
+(id)__rct_export__520;
+(id)__rct_export__691;
+(id)__rct_export__742;
+(id)__rct_export__803;
+(void)load;
-(id)supportedEvents;
-(void)webSocketDidOpen:(id)arg1 ;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)connect:(id)arg1 protocols:(id)arg2 headers:(id)arg3 socketID:(id)arg4 ;
-(void)send:(id)arg1 socketID:(id)arg2 ;
-(void)sendBinary:(id)arg1 socketID:(id)arg2 ;
-(void)dealloc;
-(void)close:(id)arg1 ;
@end

