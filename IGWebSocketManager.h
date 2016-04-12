
#import <Instagram/SRWebSocketDelegate.h>

@class NSMutableSet, NSString;

@interface IGWebSocketManager : NSObject <SRWebSocketDelegate> {

	NSMutableSet* _socketSet;

}

@property (nonatomic,retain) NSMutableSet * socketSet;              //@synthesize socketSet=_socketSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)closeWebSocket:(id)arg1 ;
+(id)sharedManager;
-(void)webSocket:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webSocket:(id)arg1 didReceiveMessage:(id)arg2 ;
-(void)webSocket:(id)arg1 didCloseWithCode:(int)arg2 reason:(id)arg3 wasClean:(char)arg4 ;
-(void)closeWebSocket:(id)arg1 ;
-(void)addSocket:(id)arg1 ;
-(void)removeSocket:(id)arg1 ;
-(NSMutableSet *)socketSet;
-(void)setSocketSet:(NSMutableSet *)arg1 ;
-(id)init;
@end

