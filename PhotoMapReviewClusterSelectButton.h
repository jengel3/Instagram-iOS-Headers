/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:09 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class IGQuadtreeCluster, IGPhotoMapEditManager;

@interface PhotoMapReviewClusterSelectButton : UIButton {

	IGQuadtreeCluster* _cluster;
	IGPhotoMapEditManager* _editManager;

}

@property (nonatomic,retain) IGQuadtreeCluster * cluster;                      //@synthesize cluster=_cluster - In the implementation block
@property (nonatomic,retain) IGPhotoMapEditManager * editManager;              //@synthesize editManager=_editManager - In the implementation block
+(id)buttonWithType:(int)arg1 cluster:(id)arg2 editManager:(id)arg3 ;
-(IGPhotoMapEditManager *)editManager;
-(void)setEditManager:(IGPhotoMapEditManager *)arg1 ;
-(void)onClusterSelectionChanged;
-(void)dealloc;
-(void)setCluster:(IGQuadtreeCluster *)arg1 ;
-(IGQuadtreeCluster *)cluster;
@end

