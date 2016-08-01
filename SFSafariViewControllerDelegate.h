

@protocol SFSafariViewControllerDelegate <NSObject>
@optional
-(void)safariViewControllerDidFinish:(id)arg1;
-(id)safariViewController:(id)arg1 activityItemsForURL:(id)arg2 title:(id)arg3;
-(void)safariViewController:(id)arg1 didCompleteInitialLoad:(char)arg2;

@end

