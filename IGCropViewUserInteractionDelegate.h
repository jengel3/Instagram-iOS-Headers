

@protocol IGCropViewUserInteractionDelegate <NSObject>
@optional
-(void)cropViewUserInteractionDidBegin:(id)arg1;
-(void)cropViewUserInteractionDidEnd:(id)arg1;
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1;
-(void)cropView:(id)arg1 didFinishAnimationWithCropRect:(CGRect)arg2;

@end

