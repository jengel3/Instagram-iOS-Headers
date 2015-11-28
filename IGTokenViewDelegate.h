

@protocol IGTokenViewDelegate <NSObject>
@required
-(void)tokenViewDidBecomeFirstResponder:(id)arg1;
-(void)tokenViewDidResignFirstResponder:(id)arg1;
-(void)tokenViewWantsDelete:(id)arg1 replacementString:(id)arg2;

@end

