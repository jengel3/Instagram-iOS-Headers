

@class IGNavigationController, IGDirectMainInboxAnalyticsLogger;

@interface IGDirectNewMessageCoordinator : NSObject {

	IGNavigationController* _navigationController;
	IGDirectMainInboxAnalyticsLogger* _analyticsLogger;

}

@property (nonatomic,__weak,readonly) IGNavigationController * navigationController;                   //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) IGDirectMainInboxAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
-(IGDirectMainInboxAnalyticsLogger *)analyticsLogger;
-(void)handleSendMediaMessage;
-(void)handleSendTextMessage;
-(void)pushComposerThreadViewController;
-(id)initWithNavigationController:(id)arg1 analyticsLogger:(id)arg2 ;
-(void)displayNewMessageActionSheet;
-(IGNavigationController *)navigationController;
@end

