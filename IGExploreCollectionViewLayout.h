
#import <UIKit/UICollectionViewFlowLayout.h>

@class NSMutableSet;

@interface IGExploreCollectionViewLayout : UICollectionViewFlowLayout {

	NSMutableSet* _removedIndexPaths;

}

@property (nonatomic,retain) NSMutableSet * removedIndexPaths;              //@synthesize removedIndexPaths=_removedIndexPaths - In the implementation block
-(void)setRemovedIndexPaths:(NSMutableSet *)arg1 ;
-(NSMutableSet *)removedIndexPaths;
-(id)init;
-(id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1 ;
-(void)prepareForCollectionViewUpdates:(id)arg1 ;
-(void)finalizeCollectionViewUpdates;
@end

