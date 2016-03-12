

@protocol UIAlertViewDelegate <NSObject>
@optional
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2;
-(void)alertViewCancel:(id)arg1;
-(void)willPresentAlertView:(id)arg1;
-(void)didPresentAlertView:(id)arg1;
-(void)alertView:(id)arg1 willDismissWithButtonIndex:(int)arg2;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
-(char)alertViewShouldEnableFirstOtherButton:(id)arg1;

@end

