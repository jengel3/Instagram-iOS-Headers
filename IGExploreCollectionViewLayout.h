/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:19:57 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface IGExploreCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableSet* _removedIndexPaths;

}

@property (nonatomic,retain) NSMutableSet * removedIndexPaths;              //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
-(NSMutableSet *)removedIndexPaths;
-(void)setRemovedIndexPaths:(NSMutableSet *)arg1 ;
-(id)init;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

