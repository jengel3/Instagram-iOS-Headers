

@protocol IGEditPostTextViewControllerDelegate <NSObject>
@optional
-(void)textViewController:(id)arg1 textViewDidChange:(id)arg2;
-(void)textViewController:(id)arg1 textViewDidChangeSelection:(id)arg2;
-(char)textViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)textViewController:(id)arg1 textViewDidBeginEditing:(id)arg2;

@required
-(void)textViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2;

@end

