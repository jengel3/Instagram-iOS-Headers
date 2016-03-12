

@protocol UIActionSheetDelegate <NSObject>
@optional
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)actionSheetCancel:(id)arg1;
-(void)willPresentActionSheet:(id)arg1;
-(void)didPresentActionSheet:(id)arg1;
-(void)actionSheet:(id)arg1 willDismissWithButtonIndex:(int)arg2;
-(void)actionSheet:(id)arg1 didDismissWithButtonIndex:(int)arg2;

@end

