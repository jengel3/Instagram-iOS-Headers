

@protocol IGDirectKeyboardTextViewControllerDelegate <NSObject>
@optional
-(char)keyboardTextViewController:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3;
-(void)keyboardTextViewController:(id)arg1 textViewWillBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidBeginEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidEndEditing:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 textViewDidChange:(id)arg2;
-(void)keyboardTextViewController:(id)arg1 didObserveKeyboardFrameChangingToFrame:(CGRect)arg2;

@required
-(void)keyboardTextViewController:(id)arg1 didTapSendWithText:(id)arg2;
-(void)keyboardTextViewControllerDidTapCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapLike:(id)arg1;
-(void)keyboardTextViewController:(id)arg1 didChangeContentHeightToHeight:(float)arg2;
-(void)keyboardTextViewControllerDidDismissCamera:(id)arg1;
-(void)keyboardTextViewControllerDidTapCameraBackButton:(id)arg1;

@end

