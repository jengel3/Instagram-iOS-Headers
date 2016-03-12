
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

