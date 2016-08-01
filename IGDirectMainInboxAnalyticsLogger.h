
#import <Instagram/IGDirectMainInboxPendingRequestLogging.h>
#import <Instagram/IGDirectInboxEnterThreadLogging.h>

@class NSString;

@interface IGDirectMainInboxAnalyticsLogger : NSObject <IGDirectMainInboxPendingRequestLogging, IGDirectInboxEnterThreadLogging>

@property (nonatomic,readonly) NSString * analyticsModule; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)analyticsModule;
-(void)logDidEnterPendingRequestsViewWithCount:(int)arg1 ;
-(void)logDidEnterThreadFromInboxAtIndex:(int)arg1 ;
-(void)logComposerNewMessagePlusButtonTapped;
-(void)logComposerSendPhotoVideoButtonTapped;
-(void)logComposerSendMessageButtonTapped;
-(void)logDidDisplayPushPromptFromInbox;
-(void)logDidConfirmPushPromptFromInbox;
-(void)logDidDismissPushPromptFromInbox;
@end

