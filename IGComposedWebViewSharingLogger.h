
#import <Instagram/IGUnifiedWebViewControllerSharingLoggingDelegate.h>

@class NSArray;

@interface IGComposedWebViewSharingLogger : NSObject <IGUnifiedWebViewControllerSharingLoggingDelegate> {

	NSArray* _loggers;

}

@property (nonatomic,readonly) NSArray * loggers;              //@synthesize loggers=_loggers - In the implementation block
-(NSArray *)loggers;
-(void)webViewController:(id)arg1 displayedShareActionsForItems:(id)arg2 ;
-(void)webViewController:(id)arg1 forItems:(id)arg2 activityType:(id)arg3 wasCompleted:(char)arg4 returnedItems:(id)arg5 activityError:(id)arg6 ;
-(id)init;
@end

