/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, February 2, 2016 at 7:26:37 PM Central Standard Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/3AACC7FB-0FE9-4871-925D-3A035BF7F4E1/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <UIKit/UICollectionView.h>

@class NSSet;

@interface IGListCollectionView : UICollectionView {

	char _requiresManualWillDisplay;
	NSSet* _ig_visibleIndexPaths;

}

@property (nonatomic,readonly) char requiresManualWillDisplay;              //@synthesize requiresManualWillDisplay=_requiresManualWillDisplay - In the implementation block
@property (nonatomic,retain) NSSet * ig_visibleIndexPaths;                  //@synthesize ig_visibleIndexPaths=_ig_visibleIndexPaths - In the implementation block
-(char)requiresManualWillDisplay;
-(NSSet *)ig_visibleIndexPaths;
-(void)setIg_visibleIndexPaths:(NSSet *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)layoutSubviews;
-(id)initWithFrame:(CGRect)arg1 collectionViewLayout:(id)arg2 ;
-(void)commonInit;
@end
