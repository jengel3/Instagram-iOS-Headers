/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:01 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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

