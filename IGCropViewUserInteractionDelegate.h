

@protocol IGCropViewUserInteractionDelegate <NSObject>
@optional
-(void)cropViewVisibleContentFrameDidChange:(CGRect)arg1;
-(void)cropViewUserInteractionDidBegin:(id)arg1;
-(void)cropViewUserInteractionDidEnd:(id)arg1;

@end

