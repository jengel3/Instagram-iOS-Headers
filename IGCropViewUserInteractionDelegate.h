

@protocol IGCropViewUserInteractionDelegate <NSObject>
@optional
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1;
-(void)cropView:(id)arg1 didFinishAnimationWithCropRect:(CGRect)arg2;
-(void)cropViewUserInteractionDidBegin:(id)arg1;
-(void)cropViewUserInteractionDidEnd:(id)arg1;

@end

