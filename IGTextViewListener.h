

@protocol IGTextViewListener <NSObject>
@required
-(void)textViewWillBeginEditing:(id)arg1;
-(void)textViewWillEndEditing:(id)arg1;
-(void)textView:(id)arg1 willChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textView:(id)arg1 willInteractWithURL:(id)arg2 inRange:(NSRange)arg3;
-(void)textView:(id)arg1 willInteractWithTextAttachment:(id)arg2 inRange:(NSRange)arg3;
-(void)textViewDidBeginEditing:(id)arg1;
-(void)textViewDidEndEditing:(id)arg1;
-(void)textViewDidChange:(id)arg1;
-(void)textViewDidChangeSelection:(id)arg1;

@end

