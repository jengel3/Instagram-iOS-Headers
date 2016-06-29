
#import <Instagram/IGGenericMegaphoneViewV2Delegate.h>
#import <Instagram/IGMegaphonePresenterProtocol.h>

@protocol IGMegaphonePresenterDelegate;
@class IGGenericMegaphone, IGDirectMainInboxAnalyticsLogger;

@interface IGDirectPushPromptMegaphonePresenter : NSObject <IGGenericMegaphoneViewV2Delegate, IGMegaphonePresenterProtocol> {

	char _hasAskedForPushPermissions;
	IGGenericMegaphone* _megaphone;
	IGDirectMainInboxAnalyticsLogger* _logger;
	id<IGMegaphonePresenterDelegate> _delegate;

}

@property (nonatomic,readonly) IGGenericMegaphone * megaphone;                                //@synthesize megaphone=_megaphone - In the implementation block
@property (nonatomic,readonly) IGDirectMainInboxAnalyticsLogger * logger;                     //@synthesize logger=_logger - In the implementation block
@property (nonatomic,__weak,readonly) id<IGMegaphonePresenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) char hasAskedForPushPermissions;                               //@synthesize hasAskedForPushPermissions=_hasAskedForPushPermissions - In the implementation block
+(id)megaphoneIfNeeded;
-(IGGenericMegaphone *)megaphone;
-(char)hasAskedForPushPermissions;
-(void)megaphoneViewDidDismiss:(id)arg1 ;
-(void)megaphoneView:(id)arg1 didSelectButton:(id)arg2 ;
-(void)megaphoneViewNeedsResize:(id)arg1 ;
-(id)viewForMegaphone;
-(void)logMegaphoneSeen;
-(id)initWithMegaphone:(id)arg1 delegate:(id)arg2 ;
-(IGDirectMainInboxAnalyticsLogger *)logger;
-(id<IGMegaphonePresenterDelegate>)delegate;
@end

