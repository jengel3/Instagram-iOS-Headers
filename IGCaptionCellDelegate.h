

@protocol IGCaptionCellDelegate <NSObject>
@optional
-(void)captionTextViewWantsMediaDisplay;
-(void)captionTextViewDidChange:(id)arg1;
-(void)captionTextViewWillBeginEditing:(id)arg1;
-(void)captionTextViewDidBeginEditing:(id)arg1;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;

@end

