

@class NSString;

@interface IGExplorePromptTooltipLogger : NSObject {

	NSString* _sessionID;

}

@property (nonatomic,retain) NSString * sessionID;              //@synthesize sessionID=_sessionID - In the implementation block
-(void)logExplorePromptTappedAtFeedPosition:(int)arg1 ;
-(void)logExplorePromptDismissButtonTappedAtFeedPosition:(int)arg1 ;
-(void)logExplorePromptTimeOutToDismissAtFeedPosition:(int)arg1 ;
-(void)logExplorePromptPresentedAtFeedPosition:(int)arg1 ;
-(void)logEvent:(id)arg1 feedPosition:(int)arg2 ;
-(id)init;
-(void)setSessionID:(NSString *)arg1 ;
-(NSString *)sessionID;
@end

