
#import <Instagram/IGViewController.h>
#import <Instagram/IGDirectInboxControllerType.h>
#import <Instagram/IGDirectThreadViewControllerDelegate.h>
#import <Instagram/IGUIPerfLoggable.h>

@class NSString;

@interface IGDirectMainInboxViewController2 : IGViewController <IGDirectInboxControllerType, IGDirectThreadViewControllerDelegate, IGUIPerfLoggable>

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(char)shouldLogEvent:(unsigned)arg1 ;
-(unsigned)lastLogEvent;
-(void)allEventsLoggedWithResult:(id)arg1 ;
-(void)refreshDataWithClearCount:(char)arg1 ;
-(void)pushToThreadWithThreadId:(id)arg1 animated:(char)arg2 logResult:(id)arg3 ;
-(unsigned)inboxSubscriptionStatus;
-(void)threadViewController:(id)arg1 didUpdateFromThread:(id)arg2 toThread:(id)arg3 ;
-(void)scrollToTopAnimated:(char)arg1 ;
-(void)viewDidLoad;
@end

