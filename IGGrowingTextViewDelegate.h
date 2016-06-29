

@protocol IGGrowingTextViewDelegate <NSObject>
@required
-(void)growingTextViewDidBeginEditing:(id)arg1;
-(void)growingTextViewDidEndEditing:(id)arg1;
-(void)growingTextViewDidChange:(id)arg1;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
-(char)growingTextViewShouldReturn:(id)arg1;

@end

