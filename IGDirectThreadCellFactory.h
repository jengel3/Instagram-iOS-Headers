/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:56 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UICollectionView, IGUser;

@interface IGDirectThreadCellFactory : NSObject {

	UICollectionView* _collectionView;
	IGUser* _cellViewer;

}

@property (assign,nonatomic,__weak) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGUser * cellViewer;                                   //@synthesize cellViewer=_cellViewer - In the implementation block
+(char)shouldHideProfilePictureForIndexPath:(id)arg1 withContents:(id)arg2 cellViewer:(id)arg3 ;
-(void)registerClassesForCollectionView:(id)arg1 ;
-(IGUser *)cellViewer;
-(id)initWithCollectionView:(id)arg1 cellViewer:(id)arg2 ;
-(id)cellForContents:(id)arg1 indexPath:(id)arg2 cellDelegate:(id)arg3 expanded:(char)arg4 ;
-(void)setCellViewer:(IGUser *)arg1 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end

