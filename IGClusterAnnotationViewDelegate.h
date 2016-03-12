

@protocol IGClusterAnnotationViewDelegate <NSObject>
@required
-(void)clusterAnnotationView:(id)arg1 explosionDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 implosionDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 fullScreenOpened:(char)arg2 withTouchedTile:(id)arg3;
-(void)clusterAnnotationView:(id)arg1 fullScreenClosed:(char)arg2;
-(char)hasPermanentlyDeletedMedia;
-(id)editManager;
-(void)clusterAnnotationView:(id)arg1 closeCluster:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 onDoubleTapFor:(id)arg2;
-(void)clusterAnnotationView:(id)arg1 restoreDidFinish:(char)arg2;
-(void)clusterAnnotationView:(id)arg1 infoButtonTappedFor:(id)arg2;
-(void)clusterAnnotationView:(id)arg1 showAllPhotosInCluster:(id)arg2;
-(char)isInEditMode;

@end

