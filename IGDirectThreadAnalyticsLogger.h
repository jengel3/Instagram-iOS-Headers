

@class NSString;

@interface IGDirectThreadAnalyticsLogger : NSObject

@property (nonatomic,readonly) NSString * analyticsModule; 
-(NSString *)analyticsModule;
-(id)typeStringForMessage:(id)arg1 ;
-(void)logSendText:(char)arg1 ;
-(void)logSendLike:(char)arg1 ;
-(void)logMessageTapped:(id)arg1 ;
-(void)logMediaExpand:(id)arg1 isFullScreen:(char)arg2 ;
-(void)logTextTappedWithURL:(id)arg1 ;
-(void)logProfilePictureTappedWithUserPk:(id)arg1 isPendingThread:(char)arg2 ;
-(void)logGroupThreadRenamedWithOldName:(id)arg1 ;
-(void)logThreadInfoTapped;
-(void)logInlineQuickCamBackButtonTapped:(int)arg1 isFromLibrary:(char)arg2 isPhoto:(char)arg3 ;
-(void)logInlineQuickCamAssetPicked:(id)arg1 isComposerFlow:(char)arg2 ;
-(void)logInlineQuickCamTapped;
-(void)logInlineQuickCamDismissed;
-(void)logPendingRequestAllowedWithPosition:(id)arg1 ;
-(void)logPendingRequestDeclinedWithPosition:(id)arg1 ;
-(void)logPendingRequestDeclineConfirmed;
-(void)logPendingRequestDeclineAndBlockConfirmed;
-(void)logSearchWithQuery:(id)arg1 ;
-(void)logUserTokenDeleted;
-(void)logTooManyRecipientsSelected;
@end

