

@protocol IGMediaViewerDelegate <NSObject>
@required
-(void)didTapMediaViewer:(id)arg1;
-(void)didSwipeDownOnMediaViewer:(id)arg1;
-(void)didEndDraggingMediaViewer:(id)arg1 mediaCenter:(CGPoint)arg2;
-(void)didTapDismissButtonOnMediaViewer:(id)arg1;

@end

