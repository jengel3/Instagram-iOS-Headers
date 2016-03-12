

@protocol UIViewControllerPreviewingDelegate <NSObject>
@required
-(id)previewingContext:(id)arg1 viewControllerForLocation:(CGPoint)arg2;
-(void)previewingContext:(id)arg1 commitViewController:(id)arg2;

@end

