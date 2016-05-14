/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:50 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class UICollectionView, UILabel;

@interface IGClipTrayView : UIView {

	UICollectionView* _collectionView;
	UILabel* _instructionLabel;

}

@property (nonatomic,retain) UICollectionView * collectionView;              //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UILabel * instructionLabel;                     //@synthesize instructionLabel=_instructionLabel - In the implementation block
-(void)setInstructionLabel:(UILabel *)arg1 ;
-(UILabel *)instructionLabel;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
@end
