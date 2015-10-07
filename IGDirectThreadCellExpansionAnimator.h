/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:03 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class UICollectionView, IGDirectThreadTransitionLayout;

@interface IGDirectThreadCellExpansionAnimator : NSObject {

	char _isAnimating;
	UICollectionView* _collectionView;
	IGDirectThreadTransitionLayout* _transitionLayout;

}

@property (assign,nonatomic) char isAnimating;                                               //@synthesize isAnimating=_isAnimating - In the implementation block
@property (assign,nonatomic,__weak) UICollectionView * collectionView;                       //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) IGDirectThreadTransitionLayout * transitionLayout;              //@synthesize transitionLayout=_transitionLayout - In the implementation block
-(void)setIsAnimating:(char)arg1 ;
-(void)animateForSelectionAtIndexPath:(id)arg1 completion:(/*^block*/id)arg2 ;
-(IGDirectThreadTransitionLayout *)transitionLayout;
-(void)setTransitionLayout:(IGDirectThreadTransitionLayout *)arg1 ;
-(UICollectionView *)collectionView;
-(char)isAnimating;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)initWithCollectionView:(id)arg1 ;
@end

