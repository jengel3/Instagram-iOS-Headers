

@protocol UIGestureRecognizerDelegate <NSObject>
@optional
-(char)gestureRecognizerShouldBegin:(id)arg1;
-(char)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
-(char)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
-(char)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
-(char)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;

@end

