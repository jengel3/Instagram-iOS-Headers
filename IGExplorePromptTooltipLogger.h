

@class NSString;

@interface IGExplorePromptTooltipLogger : NSObject {

	NSString* _sessionID;

}

@property (nonatomic,retain) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(void)logExplorePromptTapped;
-(void)logExplorePromptDismissButtonTapped;
-(void)logExplorePromptTimeOutToDismiss;
-(void)logExplorePromptPresentedAtFeedPosition:(int)arg1 ;
-(void)logExplorePromptActionSucceed;
-(void)logExplorePromptActionFail;
-(void)logDisplayAttentionOnlyAtFeedPosition:(int)arg1 ;
-(void)logEvent:(id)arg1 feedPosition:(int)arg2 ;
-(id)init;
-(id)logEvent:(id)arg1 ;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
@end

