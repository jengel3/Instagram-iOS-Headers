

@protocol IGEditBubbleAnnotationDelegate <NSObject>
@required
-(char)canZoomToCluster:(id)arg1;
-(void)editBubbleAnnotationView:(id)arg1 onEditCluster:(id)arg2;
-(void)editBubbleAnnotationView:(id)arg1 onZoomToCluster:(id)arg2;

@end

