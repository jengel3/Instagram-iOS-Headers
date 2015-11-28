

@protocol IGSuggestedUsernamesViewControllerDelegate <NSObject>
@required
-(void)suggestedUsernamesViewControllerDidCancel:(id)arg1;
-(void)suggestedUsernamesViewController:(id)arg1 didPickUsername:(id)arg2 index:(unsigned)arg3;

@end

