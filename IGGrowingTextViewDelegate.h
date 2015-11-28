

@protocol IGGrowingTextViewDelegate <NSObject>
@optional
-(char)growingTextViewShouldBeginEditing:(id)arg1;
-(char)growingTextViewShouldEndEditing:(id)arg1;
-(void)growingTextViewDidBeginEditing:(id)arg1;
-(void)growingTextViewDidEndEditing:(id)arg1;
-(char)growingTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)growingTextViewDidChange:(id)arg1;
-(void)growingTextView:(id)arg1 willChangeHeight:(float)arg2;
-(void)growingTextView:(id)arg1 didChangeHeight:(float)arg2;
-(void)growingTextViewDidChangeSelection:(id)arg1;
-(char)growingTextViewShouldReturn:(id)arg1;
-(char)growingTextViewShouldAnimateOnHeightChange:(id)arg1;

@end

