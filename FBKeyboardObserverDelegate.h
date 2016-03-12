

@protocol FBKeyboardObserverDelegate <NSObject>
@required
-(void)keyboardObserver:(id)arg1 keyboardWillShowWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
-(void)keyboardObserverKeyboardDidShow:(id)arg1;
-(void)keyboardObserver:(id)arg1 keyboardWillHideWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
-(void)keyboardObserverKeyboardDidHide:(id)arg1;
-(void)keyboardObserver:(id)arg1 keyboardFrameWillChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5;
-(void)keyboardObserver:(id)arg1 keyboardFrameDidChangeWithBeginFrame:(CGRect)arg2 endFrame:(CGRect)arg3 duration:(double)arg4 curve:(int)arg5;

@end

