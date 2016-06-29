
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectPendingInboxControllerType.h>

@protocol IGDirectPendingInboxDelegate;
@class IGUserSession, NSString;

@interface IGDirectPendingInboxViewController2 : IGViewController <IGDirectPendingInboxControllerType> {

	id<IGDirectPendingInboxDelegate> _delegate;
	int _totalPending;
	IGUserSession* _userSession;

}

@property (nonatomic,readonly) IGUserSession * userSession;                                 //@synthesize userSession=_userSession - In the implementation block
@property (assign,nonatomic,__weak) id<IGDirectPendingInboxDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int totalPending;                                              //@synthesize totalPending=_totalPending - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)analyticsModule;
-(id)initWithUserSession:(id)arg1 ;
-(void)setTotalPending:(int)arg1 ;
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(int)totalPending;
-(void)setDelegate:(id<IGDirectPendingInboxDelegate>)arg1 ;
-(id<IGDirectPendingInboxDelegate>)delegate;
-(IGUserSession *)userSession;
@end

