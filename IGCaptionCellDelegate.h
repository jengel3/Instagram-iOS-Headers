

@protocol IGCaptionCellDelegate <NSObject>
@required
-(char)captionCellMediaOverlayViewTapEnabled;
-(void)captionCellMediaOverlayViewTapped;
-(char)captionTextView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)captionTextViewDidBeginEditing:(id)arg1;
-(void)captionTextViewWillBeginEditing:(id)arg1;
-(void)captionTextViewDidChange:(id)arg1;
-(void)captionTextViewDidEndEditing:(id)arg1 text:(id)arg2;

@end

