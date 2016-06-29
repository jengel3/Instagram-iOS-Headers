
#import <Instagram/IGDirectMainInboxPendingRequestLogging.h>
#import <Instagram/IGDirectMainInboxEnterThreadLogging.h>

@class NSString;

@interface IGDirectMainInboxAnalyticsLogger : NSObject <IGDirectMainInboxPendingRequestLogging, IGDirectMainInboxEnterThreadLogging>

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

