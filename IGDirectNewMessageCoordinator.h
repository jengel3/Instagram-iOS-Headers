

@class IGNavigationController, IGDirectMainInboxAnalyticsLogger, IGUserSession;

@interface IGDirectNewMessageCoordinator : NSObject {

	IGNavigationController* _navigationController;
	IGDirectMainInboxAnalyticsLogger* _analyticsLogger;
	IGUserSession* _userSession;

}

@property (nonatomic,__weak,readonly) IGNavigationController * navigationController;                   //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,__weak,readonly) IGDirectMainInboxAnalyticsLogger * analyticsLogger;              //@synthesize analyticsLogger=_analyticsLogger - In the implementation block
@property (nonatomic,readonly) IGUserSession * userSession;                                            //@synthesize userSession=_userSession - In the implementation block
-(IGDirectMainInboxAnalyticsLogger *)analyticsLogger;
-(id)initWithNavigationController:(id)arg1 analyticsLogger:(id)arg2 userSession:(id)arg3 ;
-(void)displayNewMessageActionSheet;
-(void)handleSendMediaMessage;
-(void)handleSendTextMessage;
-(void)pushComposerThreadViewController;
-(IGNavigationController *)navigationController;
-(IGUserSession *)userSession;
@end

